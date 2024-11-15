#include <iostream>


/*
    ��Ԫ
    �ṩ��һ�ַ�ʽ������ǳ�Ա�����������ĳ�����˽�кͱ�����Ա��
*/

//������������
class fri;


class Box {
private:
    double width;
    
    //����������Ϊ��Ԫ��
    friend class fri;

public:
    Box(double w) : width(w) {}

    // ������Ԫ���� ��ʽ����:
    // �����߱�����������������Է���˽�г�Ա����
    friend void printWidth(const Box& b);
};

// ��Ԫ��������
void printWidth(const Box& b) {
    // ���� Box ��˽�г�Ա����
    std::cout << "Width: " << b.width << std::endl;
}

int main() {
    Box box(10.0);
    printWidth(box);  // ������Ԫ����
    return 0;
}
