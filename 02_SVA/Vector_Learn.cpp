#include <iostream>
#include <vector>

int main() {
    // 创建一个空的 vector
    std::vector<int> vec;
    //可以看到 我们声明了一个 装着 int对象 的容器 只可以装int喔

    // 添加元素到 vector 尾部
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // 访问元素
    std::cout << "Element at index 0: " << vec[0] << std::endl;
    std::cout << "Element at index 1: " << vec.at(1) << std::endl;//使用.at() 会检查越界(你也不想一个五十人的队伍出现了第五十一个人吧),更加安全

    // 修改元素
    vec[0] = 100;

    // 遍历 vector
    /*
        以下是for循环的基本结构
        for (initialization; condition; iteration) {
            // 循环体（要重复执行的代码）
        }
        初始化（initialization）：
        这个部分通常用于声明和初始化一个循环控制变量。
        初始化只在循环开始时执行一次。

        条件检查（condition）：
        在每次循环迭代前进行检查。
        如果条件为true，则执行循环体；如果为false，循环终止。
        
        迭代（iteration）：
        这个部分在每次循环体执行后运行，用于更新循环控制变量。
        通常用来增量或减量循环变量。
        
        所以说： initialization执行一次之后不管他了  condition -> 循环体 -> iteration -> condition .... 开始循环 一直到condition为false为止
    */
    std::cout << "Vector elements: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // 删除 vector 尾部的元素
    vec.pop_back();

    // 检查 vector 是否为空
    if (vec.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        std::cout << "Vector is not empty" << std::endl;
    }

    // 清空 vector 中的所有元素
    vec.clear();

    std::cout << "Vector size after clear: " << vec.size() << std::endl;

    return 0;
}
