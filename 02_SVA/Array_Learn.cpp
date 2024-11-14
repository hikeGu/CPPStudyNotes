#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};//大小为5，装着int类型 可以看到一开始就确定了大小

    // 访问元素
    std::cout << "First element: " << arr[0] << std::endl;

    // 修改元素
    arr[0] = 10;
    std::cout << "Modified first element: " << arr[0] << std::endl;

    // 使用迭代器遍历
    std::cout << "Array elements: ";
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
