#include <iostream>
#include <vector>

int main() {
    // 示例 1：遍历和排序 std::vector

    // 初始化一个包含整数的 vector
    std::vector<int> numbers = {5, 3, 1, 4, 2};

    // 使用迭代器遍历 vector 并输出初始内容
    std::cout << "Original vector: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        //取出numbers的迭代器，可以把他当作一个指针 
        /*
            numbers.begin() 返回一个迭代器，指向vector的第一个元素。
            numbers.end() 返回一个迭代器，指向vector的末尾（一个无效位置），也就是最后一个元素的后面一个位数。
            显然当 begin=end 时，已经遍历所有元素了
        */
        std::cout << *it << " "; // 解引用迭代器以访问元素
    }
    std::cout << std::endl;

    // 使用反向迭代器遍历 vector 并输出内容
    std::cout << "Reversed vector: ";
    for (std::vector<int>::reverse_iterator rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
        std::cout << *rit << " "; // 使用反向迭代器解引用访问元素
    }
    std::cout << std::endl;

    return 0;
}
