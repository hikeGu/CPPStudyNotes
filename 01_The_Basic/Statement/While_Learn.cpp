#include <iostream>

int main() {
    int counter = 0; // 初始化计数器

    // while 循环条件：当 counter 小于 5 时继续执行
    while (counter < 5) {
        // 输出当前迭代的计数器值
        std::cout << "Iteration " << counter << " using while loop." << std::endl;
        ++counter; // 不要忘记更新条件变量，避免死循环
    }
    
    counter = 0; // 初始化计数器

    // do-while 循环确保循环体至少执行一次
    do {
        // 输出当前迭代的计数器值
        std::cout << "Iteration " << counter << " using do-while loop." << std::endl;
        ++counter; // 更新条件变量
    } while (counter < 5); // 检查条件
    return 0;
}
