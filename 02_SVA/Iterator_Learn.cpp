#include <iostream>
#include <vector>

int main() {
    // ʾ�� 1������������ std::vector

    // ��ʼ��һ������������ vector
    std::vector<int> numbers = {5, 3, 1, 4, 2};

    // ʹ�õ��������� vector �������ʼ����
    std::cout << "Original vector: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        //ȡ��numbers�ĵ����������԰�������һ��ָ�� 
        /*
            numbers.begin() ����һ����������ָ��vector�ĵ�һ��Ԫ�ء�
            numbers.end() ����һ����������ָ��vector��ĩβ��һ����Чλ�ã���Ҳ�������һ��Ԫ�صĺ���һ��λ����
            ��Ȼ�� begin=end ʱ���Ѿ���������Ԫ����
        */
        std::cout << *it << " "; // �����õ������Է���Ԫ��
    }
    std::cout << std::endl;

    // ʹ�÷������������ vector ���������
    std::cout << "Reversed vector: ";
    for (std::vector<int>::reverse_iterator rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
        std::cout << *rit << " "; // ʹ�÷�������������÷���Ԫ��
    }
    std::cout << std::endl;

    return 0;
}
