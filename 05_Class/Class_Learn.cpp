#include <iostream>
#include <string>


/*
    ����һ�������˻�����
*/
class BankAccount {
private:
    std::string accountHolder;
    std::string accountNumber;
    double balance;

public:
    // Ĭ�Ϲ��캯��
    BankAccount() : accountHolder("Unknown"), accountNumber("000000"), balance(0.0) {}

    // �������Ĺ��캯��
    BankAccount(const std::string& holder, const std::string& number, double initialBalance)
        : accountHolder(holder), accountNumber(number), balance(initialBalance) {}


    // ����
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited " << amount << ". New balance: " << balance << std::endl;
        }
        else {
            std::cout << "Invalid deposit amount!" << std::endl;
        }
    }

    // ȡ���
    bool withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            std::cout << "Withdrew " << amount << ". New balance: " << balance << std::endl;
            return true;
        }
        else {
            std::cout << "Invalid withdrawal amount or insufficient funds!" << std::endl;
            return false;
        }
    }

    // ��ȡ��� ���Կ����ڴ����ǰ ������ const �ؼ��� �����ú��������޸Ķ����ڲ���״̬
    double getBalance() const {
        return balance;
    }

    // �����˻�����������
    void setAccountHolder(const std::string& holder) {
        accountHolder = holder;
    }

    // ��ȡ�˻�����������
    std::string getAccountHolder() const {
        return accountHolder;
    }

    // �����˻����
    void setAccountNumber(const std::string& number) {
        accountNumber = number;
    }

    // ��ȡ�˻����
    std::string getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    // ����һ�������˻�����
    BankAccount account("John Doe", "123456789", 1000.0);

    // ��ӡ�˻���Ϣ
    std::cout << "Account Holder: " << account.getAccountHolder() << std::endl;
    std::cout << "Account Number: " << account.getAccountNumber() << std::endl;
    std::cout << "Initial Balance: " << account.getBalance() << std::endl;

    // ִ��һЩ����
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500); // ����ȡ������

    return 0;
}
