#include <iostream>
#include <vector>
#include <string>

int main() {
    // 1. 字面量表达式
    int num = 100;            // 整数字面量
    double pi = 3.14159;      // 浮点数字面量
    char letter = 'A';        // 字符字面量
    const char* greeting = "Hello, World!"; // 字符串字面量

    // 2. 变量表达式
    int x = num;              // num是一个变量表达式，其值赋给x

    // 3. 算术运算符表达式
    int total = num + x;      // 使用加法运算符
    int diff = num - x;       // 使用减法运算符
    int product = num * x;    // 使用乘法运算符
    double quotient = pi / 2; // 使用除法运算符
    int remainder = num % 3;  // 使用取模运算符

    // 4. 关系运算符表达式
    bool isGreater = num > x; // 判断num是否大于x
    bool isLess = num < 200;  // 判断num是否小于200
    bool isEqual = (x == 100); // 判断x是否等于100

    // 5. 逻辑运算符表达式
    bool andResult = (num > 50) && (x < 150); // 逻辑与
    bool orResult = (num < 50) || (x < 150);  // 逻辑或
    bool notResult = !isEqual;                // 逻辑非

    // 6. 条件（三元）运算符表达式
    int maxNum = (num > x) ? num : x;         // 返回两个数中的较大者

    // 7. 赋值表达式
    int y;
    y = num;                                  // 给y赋值

    // 8. 自增、自减运算符表达式
    int counter = 0;
    counter++; // 后缀自增，counter变为1
    ++counter; // 前缀自增，counter变为2
    counter--; // 后缀自减，counter变为1
    --counter; // 前缀自减，counter变为0

    // 9. 函数调用表达式
    std::cout << "Hello" << std::endl;        // std::cout与<<一起用于输出

    // 10. 类型转换表达式
    double d = 42.9;
    int i = static_cast<int>(d);              // 将d转换为int，结果为42

    // 11. 数组下标表达式
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int firstElement = numbers[0];            // 访问数组的第一个元素

    // 12. 成员访问表达式
    struct Point {
        int x, y;
    };
    Point p = {3, 4};
    int px = p.x;                             // 访问结构体成员

    // 13. 指针运算表达式
    int value = 10;
    int* ptr = &value;                        // 取value的地址
    *ptr = 20;                                // 修改ptr指向的值

    // 14. 逗号表达式
    int a, b;
    a = (b = 3, b + 2);                       // 先执行b=3，再执行b+2，a的值为5

    // 15. new运算表达式
    int* dynamicInt = new int(5);             // 动态分配整数并初始化为5
    delete dynamicInt;                        // 释放动态分配的内存


    return 0;
}
