#include<iostream>
//包含我们自己写的头文件
#include "Id_card_h.h"

int main()
{
    /*
        我们先来介绍使用重命名的两种方式
    */
    std::cout << "----------------------重命名-----------------------" << std::endl;
    typedef int t_int; //t_int 成为了 int 的别名
    t_int a = 100;
    std::cout << typeid(a).name() << "<-类型-(其中i表示int类型)-值->" << a << std::endl;
    auto b = 300;//自动推断a的类型，然后将b赋值为a的类型
    std::cout << typeid(b).name() << "<-类型-(其中i表示int类型)-值->" << b << std::endl;
    decltype(a) c = 200;//decltype(a) 告诉编译器，c的类型是a的类型
    std::cout << typeid(c).name() << "<-类型-(其中i表示int类型)-值->" << c << std::endl;
    std::cout << "----------------------数据结构的使用-----------------------" << std::endl;
    using Idcard = Id_card;// Idcard 成为了 Id_card 的别名
    Idcard idcard;//声明一个结构体变量（也就是Id_Card）
    idcard.age = 18;//给数据结构里定义的数据类型变量赋值
    idcard.name = "小明";//给数据结构里定义的数据类型变量赋值
    std::cout << "年龄是：" << idcard.age << "，名字是：" << idcard.name << std::endl;
    std::cout << "----------------------END-----------------------" << std::endl;
    

    return 0;
}