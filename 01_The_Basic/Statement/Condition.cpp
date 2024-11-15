#include <iostream>

int main() {
    int number = 7;

    // 1. if 语句
    // 如果 number 大于 5，则执行大括号内的代码
    if (number > 5) {
        std::cout << "Number is greater than 5." << std::endl;
    }

    // 2. if-else 语句
    // 如果 number 大于 10，则执行第一个代码块，否则执行 else 内的代码块
    if (number > 10) {
        std::cout << "Number is greater than 10." << std::endl;
    } else {
        std::cout << "Number is not greater than 10." << std::endl;
    }

    // 3. if-else if-else 语句
    // 根据条件的真假，选择执行一个代码块
    if (number > 10) {
        std::cout << "Number is greater than 10." << std::endl;
    } else if (number == 7) {
        std::cout << "Number is exactly 7." << std::endl;
    } else {
        std::cout << "Number is less than 7." << std::endl;
    }

    // 4. switch 语句
    // 用于选择多个分支，适合用在以整数或枚举为条件的情况
    int option = 2;
    switch (option) {
        case 1:
            std::cout << "Option 1 selected." << std::endl;
            break; // 使用 break 跳出 switch 语句，防止执行后续 case
        case 2:
            std::cout << "Option 2 selected." << std::endl;
            break;
        case 3:
            std::cout << "Option 3 selected." << std::endl;
            break;
        default:
            // 如果没有匹配的 case，则执行 default
            std::cout << "Invalid option." << std::endl;
            break;
    }

    return 0;
}
