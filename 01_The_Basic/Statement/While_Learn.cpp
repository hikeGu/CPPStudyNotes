#include <iostream>

int main() {
    int counter = 0; // ��ʼ��������

    // while ѭ���������� counter С�� 5 ʱ����ִ��
    while (counter < 5) {
        // �����ǰ�����ļ�����ֵ
        std::cout << "Iteration " << counter << " using while loop." << std::endl;
        ++counter; // ��Ҫ���Ǹ�������������������ѭ��
    }
    
    counter = 0; // ��ʼ��������

    // do-while ѭ��ȷ��ѭ��������ִ��һ��
    do {
        // �����ǰ�����ļ�����ֵ
        std::cout << "Iteration " << counter << " using do-while loop." << std::endl;
        ++counter; // ������������
    } while (counter < 5); // �������
    return 0;
}
