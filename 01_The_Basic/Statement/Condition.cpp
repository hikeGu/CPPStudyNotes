#include <iostream>

int main() {
    int number = 7;

    // 1. if ���
    // ��� number ���� 5����ִ�д������ڵĴ���
    if (number > 5) {
        std::cout << "Number is greater than 5." << std::endl;
    }

    // 2. if-else ���
    // ��� number ���� 10����ִ�е�һ������飬����ִ�� else �ڵĴ����
    if (number > 10) {
        std::cout << "Number is greater than 10." << std::endl;
    } else {
        std::cout << "Number is not greater than 10." << std::endl;
    }

    // 3. if-else if-else ���
    // ������������٣�ѡ��ִ��һ�������
    if (number > 10) {
        std::cout << "Number is greater than 10." << std::endl;
    } else if (number == 7) {
        std::cout << "Number is exactly 7." << std::endl;
    } else {
        std::cout << "Number is less than 7." << std::endl;
    }

    // 4. switch ���
    // ����ѡ������֧���ʺ�������������ö��Ϊ���������
    int option = 2;
    switch (option) {
        case 1:
            std::cout << "Option 1 selected." << std::endl;
            break; // ʹ�� break ���� switch ��䣬��ִֹ�к��� case
        case 2:
            std::cout << "Option 2 selected." << std::endl;
            break;
        case 3:
            std::cout << "Option 3 selected." << std::endl;
            break;
        default:
            // ���û��ƥ��� case����ִ�� default
            std::cout << "Invalid option." << std::endl;
            break;
    }

    return 0;
}
