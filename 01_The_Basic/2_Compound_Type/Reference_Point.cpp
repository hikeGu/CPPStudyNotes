#include <iostream>

int main()
{
    std::cout << "-----------------------引用的用法-----------------------" << std::endl;
    // 我们先来演示引用的用法
    int a = 10;
    // 以上是一个int型的变量，我们用r_a来引用它
    int &r_a = a;
    // 上方这条语句可以理解为 一个名字叫做r_a 它的类型是 一个int类型 的 引用
    // 接下来直接把r_a当作a使用即可
    std::cout << "r_a的值为: " << r_a << std::endl;
    r_a = 5;
    std::cout << "r_a的值为: " << r_a << std::endl;
    std::cout << "-----------------------指针的用法-----------------------" << std::endl;
    int b = 20;
    // 以上是一个int型的变量，我们用p_b来指向它
    int *p_b = &b;
    /*
        上方这条语句可以理解为 一个名字叫做p_b 它的类型是 一个int类型 的 指针 （里面存储的是地址）
        注意，此时的 & 符号意味着 取地址符 （操作符的一种）
        当我们使用需要使用p_b时，要在前面加上 * 注意，此时的 * 意味着 解引用符（操作符的一种） 虽然这名字听着有点歧义~~~
    */
    std::cout << "p_b的值为: " << *p_b << std::endl;
    *p_b = 15;
    std::cout << "p_b的值为: " << *p_b << std::endl;
    //当你暂时只是想要一个指针而不指向到任何东西，你可以使用nullptr来使它暂时为空，这也是一个很好的习惯否则会变得不幸！！！
    int *p_c = nullptr;
    int c = 4;
    p_c = &c;
    std::cout << "p_c的值为: " << *p_c << std::endl;

    // 接下来我们试着上写难度：指向指针的指针
    std::cout << "-----------------------指向指针的指针-----------------------" << std::endl;
    int value = 10;
    //指向变量 value 的指针
    int *ptr = &value;
    // 指向 ptr 的指针
    int **doublePtr = &ptr; 

    std::cout << "Value: " << value << std::endl;
    std::cout << "Pointer to Value: " << *ptr << std::endl;
    std::cout << "Double Pointer to Value(指向指针的指针): " << **doublePtr << std::endl;//一个简单的套娃
    std::cout << "-----------------------END-----------------------" << std::endl;
    // 以上就是引用和指针的用法, * 在数据类型之后的时候表示声明为指针，而在其他地方表示解引用符； & 在数据类型之后的时候表示声明为引用，而在其他地方表示取地址符 
    return 0;
}