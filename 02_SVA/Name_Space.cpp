#include<iostream>
/*
    �����ռ��������ʽ using namespace::name
    ���԰������� ��namespace �µ� name �ù�������
    ����ֱ��ʹ��name
*/

namespace MyNamespace {
    // ���Ƕ�����һ�������ռ䣬�ռ����ֻ��һ������
    int myVariable = 10;
}

namespace YourNamespace {
    // ���Ƕ�����һ�������ռ�, �ռ���ֻ��һ������
    void myFunction() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

//���ǽ������ռ��еı���myVariable ��������
using MyNamespace::myVariable;

int main() {
    // ���ǿ���ֱ��ʹ�ñ���,��Ϊ֮ǰ�Ѿ�����������
    std::cout << "-------------------------------������----------------------------------" << std::endl;
    std::cout << "myVariable: " << myVariable << std::endl;

    // ���ǲ���ֱ��ʹ�ú�������Ϊ����û�б�����������ֻ��ͨ�����ַ�ʽʹ����
    std::cout << "-------------------------------δ����----------------------------------" << std::endl;
    YourNamespace::myFunction();
    std::cout << "-------------------------------END----------------------------------" << std::endl;
}