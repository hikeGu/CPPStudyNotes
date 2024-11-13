#include<iostream>

int main(){
    //int类型，用来存储整数，官方叫法整型
    //举个例子 年龄 年份 日期
    std::cout << "-------------------------------int------------------------------" <<std::endl;
    
    int i_year;
    i_year = 2024;
    int i_age = 18;
    //如果出现小数将会直接舍去小数位，这或许可以帮助以后你写算法题
    int i_days = 7.5;
    std::cout << "i_age的值是： "<< i_age << std::endl;
    std::cout << "i_year的值是： "<< i_year << std::endl;
    std::cout << "i_days的值是： "<< i_days << std::endl;
    
    //double类型，用来存储小数，官方叫法双浮点型
    //举个例子，身高 体重 存款
    std::cout << "-------------------------------double------------------------------" <<std::endl;
    double d_height = 1.60;
    double d_weight = 130.5;
    double d_save = 0.01;
    std::cout << "d_height的值是： "<< d_height << std::endl;
    std::cout << "d_weight的值是： "<< d_weight << std::endl;
    std::cout << "d_save的值是： "<< d_save << std::endl;
    
    //char类型，用来存储字符，官方叫法字符型
    std::cout << "-------------------------------char------------------------------" <<std::endl;
    char c_example = 'A';
    char c_dollar_sign = '$';
    std::cout << "c_example : "<< c_example << std::endl;
    std::cout << "c_dollar_sign : "<< c_dollar_sign << std::endl;

    //bool类型，用来存储布尔值也就是真假，官方叫法布尔型
    //举个例子 电灯开关
    std::cout << "-------------------------------bool------------------------------" <<std::endl;
    bool b_light = true;
    std::cout << "b_light : "<< b_light << std::endl;
    b_light = false;
    std::cout << "b_light : "<< b_light << std::endl;
    
    //String 类型，用来存储字符串...暂时可以不用深入理解
    std::cout << "-------------------------------String------------------------------" <<std::endl;
    std::string s_name = "HuangYu";
    std::cout << "s_name : "<< s_name << std::endl;
    
    //const 用来定义一个常量变量，其值在初始化后不可更改
    std::cout << "-------------------------------const------------------------------" <<std::endl;
    //显然，我们不希望Π值被修改
    const double PI = 3.14159;
    double d_radius = 5.0;
    double d_area = PI * d_radius * d_radius;
    std::cout << "The area of the circle is:  "<< d_area << std::endl;
    std::cout << "-------------------------------end------------------------------" <<std::endl;
    return 0;
}