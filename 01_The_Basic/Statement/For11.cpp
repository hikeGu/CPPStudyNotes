#include <iostream>
#include <vector>

int main() {
    // ����һ��������������ʼ��
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // ʹ�÷�Χforѭ�����������е�ÿ��Ԫ��
    for (int number : numbers) {
        // ��ѭ�����У�'number' �ǵ�ǰ�����е�Ԫ��
        std::cout << "Number: " << number << std::endl;
    }

    // ���ϣ����ѭ���иı� vector ��Ԫ�ص�ֵ������ʹ������
    for (int& number : numbers) {
        // ͨ�������޸�ÿ��Ԫ�أ�����ӱ�
        number *= 2;
    }

    // ��ӡ�޸ĺ������
    std::cout << "Modified numbers: ";
    for (int number : numbers) {
        // ���ÿ���޸ĺ��Ԫ��ֵ
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
