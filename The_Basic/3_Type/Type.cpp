#include<iostream>
//���������Լ�д��ͷ�ļ�
#include "Id_card_h.h"

int main()
{
    /*
        ������������ʹ�������������ַ�ʽ
    */
    std::cout << "----------------------������-----------------------" << std::endl;
    typedef int t_int; //t_int ��Ϊ�� int �ı���
    t_int a = 100;
    std::cout << typeid(a).name() << "<-����-(����i��ʾint����)-ֵ->" << a << std::endl;
    auto b = 300;//�Զ��ƶ�a�����ͣ�Ȼ��b��ֵΪa������
    std::cout << typeid(b).name() << "<-����-(����i��ʾint����)-ֵ->" << b << std::endl;
    decltype(a) c = 200;//decltype(a) ���߱�������c��������a������
    std::cout << typeid(c).name() << "<-����-(����i��ʾint����)-ֵ->" << c << std::endl;
    std::cout << "----------------------���ݽṹ��ʹ��-----------------------" << std::endl;
    using Idcard = Id_card;// Idcard ��Ϊ�� Id_card �ı���
    Idcard idcard;//����һ���ṹ�������Ҳ����Id_Card��
    idcard.age = 18;//�����ݽṹ�ﶨ����������ͱ�����ֵ
    idcard.name = "С��";//�����ݽṹ�ﶨ����������ͱ�����ֵ
    std::cout << "�����ǣ�" << idcard.age << "�������ǣ�" << idcard.name << std::endl;
    std::cout << "----------------------END-----------------------" << std::endl;
    

    return 0;
}