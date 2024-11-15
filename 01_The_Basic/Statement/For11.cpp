#include <iostream>
#include <vector>

int main() {
    // 定义一个整数向量并初始化
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // 使用范围for循环遍历向量中的每个元素
    for (int number : numbers) {
        // 在循环体中，'number' 是当前迭代中的元素
        std::cout << "Number: " << number << std::endl;
    }

    // 如果希望在循环中改变 vector 内元素的值，可以使用引用
    for (int& number : numbers) {
        // 通过引用修改每个元素，将其加倍
        number *= 2;
    }

    // 打印修改后的向量
    std::cout << "Modified numbers: ";
    for (int number : numbers) {
        // 输出每个修改后的元素值
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
