#include <iostream>


/*
    友元
    提供了一种方式来允许非成员函数或类访问某个类的私有和保护成员。
*/

//先声明声明类
class fri;


class Box {
private:
    double width;
    
    //将该类声明为友元类
    friend class fri;

public:
    Box(double w) : width(w) {}

    // 声明友元函数 格式如下:
    // 它告诉编译器，这个函数可以访问私有成员变量
    friend void printWidth(const Box& b);
};

// 友元函数定义
void printWidth(const Box& b) {
    // 访问 Box 的私有成员变量
    std::cout << "Width: " << b.width << std::endl;
}

int main() {
    Box box(10.0);
    printWidth(box);  // 调用友元函数
    return 0;
}
