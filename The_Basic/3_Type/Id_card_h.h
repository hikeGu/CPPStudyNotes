/*
    放置头文件出现各种各样的问题，比如被重复包含，
    所以有了 预处理器（preprocessor）。
    之前的#include就是预处理功能，它会将指定的头文件内容代替#include处
*/
/*
    防止有笨比重复包含同一个头文件内容，
    ifndef： 如果没有包含后方的头文件，则执行以下内容一直到 #endif
*/
#ifndef Id_card_h
//将 Id_card_h 设定为预处理变量
#define Id_card_h

#include <string>

struct Id_card
{
    std::string name;//存放姓名
    int age;//存放年龄
};

#endif