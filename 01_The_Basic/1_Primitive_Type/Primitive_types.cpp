#include<iostream>

int main(){
    //int���ͣ������洢�������ٷ��з�����
    //�ٸ����� ���� ��� ����
    std::cout << "-------------------------------int------------------------------" <<std::endl;
    
    int i_year;
    i_year = 2024;
    int i_age = 18;
    //�������С������ֱ����ȥС��λ���������԰����Ժ���д�㷨��
    int i_days = 7.5;
    std::cout << "i_age��ֵ�ǣ� "<< i_age << std::endl;
    std::cout << "i_year��ֵ�ǣ� "<< i_year << std::endl;
    std::cout << "i_days��ֵ�ǣ� "<< i_days << std::endl;
    
    //double���ͣ������洢С�����ٷ��з�˫������
    //�ٸ����ӣ���� ���� ���
    std::cout << "-------------------------------double------------------------------" <<std::endl;
    double d_height = 1.60;
    double d_weight = 130.5;
    double d_save = 0.01;
    std::cout << "d_height��ֵ�ǣ� "<< d_height << std::endl;
    std::cout << "d_weight��ֵ�ǣ� "<< d_weight << std::endl;
    std::cout << "d_save��ֵ�ǣ� "<< d_save << std::endl;
    
    //char���ͣ������洢�ַ����ٷ��з��ַ���
    std::cout << "-------------------------------char------------------------------" <<std::endl;
    char c_example = 'A';
    char c_dollar_sign = '$';
    std::cout << "c_example : "<< c_example << std::endl;
    std::cout << "c_dollar_sign : "<< c_dollar_sign << std::endl;

    //bool���ͣ������洢����ֵҲ������٣��ٷ��з�������
    //�ٸ����� ��ƿ���
    std::cout << "-------------------------------bool------------------------------" <<std::endl;
    bool b_light = true;
    std::cout << "b_light : "<< b_light << std::endl;
    b_light = false;
    std::cout << "b_light : "<< b_light << std::endl;
    
    //String ���ͣ������洢�ַ���...��ʱ���Բ����������
    std::cout << "-------------------------------String------------------------------" <<std::endl;
    std::string s_name = "HuangYu";
    std::cout << "s_name : "<< s_name << std::endl;
    
    //const ��������һ��������������ֵ�ڳ�ʼ���󲻿ɸ���
    std::cout << "-------------------------------const------------------------------" <<std::endl;
    //��Ȼ�����ǲ�ϣ����ֵ���޸�
    const double PI = 3.14159;
    double d_radius = 5.0;
    double d_area = PI * d_radius * d_radius;
    std::cout << "The area of the circle is:  "<< d_area << std::endl;
    std::cout << "-------------------------------end------------------------------" <<std::endl;
    return 0;
}