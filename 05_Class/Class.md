# 类
在 C++ 中，类（class）是用户定义的数据类型，用于封装数据和与之相关的操作。类是面向对象编程（OOP）的核心，允许程序员创建复杂的数据结构，并定义其操作行为。类可以包含成员变量和成员函数，支持继承、多态、封装和抽象等OOP特性。
> 我们希望 类的作者 只负责写类 而调用类的程序员无需知道里面到底做了什么

> 就好像战士只需要知道枪怎么用 而不需要枪怎么造

> 而造枪的考虑的就多了
## 类的作用域
作用域（Scope）是指程序中变量、函数、类等实体的可见范围。作用域影响到这些实体在哪些地方可以被访问和使用。
> 无规矩不成方圆   
> 你也不希望人家把你写的东西乱修改吧   
> 很多时候我们只想别人拿来用，而不是乱改   
> 你也不想把电脑带给别人玩永劫无间，结果人家把你的开机密码换了

## 学习顺序

> def -> Learn -> fri



## 类声明和定义
> 为了方便 我们演示的例子并没有分开
> 但是如果你开发大型项目还是最好分开

在 C++ 中，类声明和定义是分开的。类声明定义了类的名称、成员变量和成员函数的类型，而类定义则提供了具体的实现。以下是一个简单的类声明和定义的例子：

头文件（MyClass.h）
```
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
public:
    MyClass();
    void display() const;

private:
    int value;
};

#endif
```

源文件（MyClass.cpp）
```
#include <iostream>
#include "MyClass.h"

// 构造函数定义
MyClass::MyClass() : value(0) {}

// 成员函数定义
void MyClass::display() const {
    std::cout << "Value: " << value << std::endl;
}
```
