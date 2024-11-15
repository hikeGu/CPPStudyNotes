#include <iostream>
#include <string>


/*
    这是一个银行账户的类
*/
class BankAccount {
private:
    std::string accountHolder;
    std::string accountNumber;
    double balance;

public:
    // 默认构造函数
    BankAccount() : accountHolder("Unknown"), accountNumber("000000"), balance(0.0) {}

    // 带参数的构造函数
    BankAccount(const std::string& holder, const std::string& number, double initialBalance)
        : accountHolder(holder), accountNumber(number), balance(initialBalance) {}


    // 存款函数
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited " << amount << ". New balance: " << balance << std::endl;
        }
        else {
            std::cout << "Invalid deposit amount!" << std::endl;
        }
    }

    // 取款函数
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

    // 获取余额 可以看到在代码块前 加上了 const 关键字 表明该函数不会修改对象内部的状态
    double getBalance() const {
        return balance;
    }

    // 设置账户持有者名称
    void setAccountHolder(const std::string& holder) {
        accountHolder = holder;
    }

    // 获取账户持有者名称
    std::string getAccountHolder() const {
        return accountHolder;
    }

    // 设置账户编号
    void setAccountNumber(const std::string& number) {
        accountNumber = number;
    }

    // 获取账户编号
    std::string getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    // 创建一个银行账户对象
    BankAccount account("John Doe", "123456789", 1000.0);

    // 打印账户信息
    std::cout << "Account Holder: " << account.getAccountHolder() << std::endl;
    std::cout << "Account Number: " << account.getAccountNumber() << std::endl;
    std::cout << "Initial Balance: " << account.getBalance() << std::endl;

    // 执行一些操作
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500); // 尝试取款超出余额

    return 0;
}
