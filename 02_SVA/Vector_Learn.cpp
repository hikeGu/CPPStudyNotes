#include <iostream>
#include <vector>

int main() {
    // ����һ���յ� vector
    std::vector<int> vec;
    //���Կ��� ����������һ�� װ�� int���� ������ ֻ����װint�

    // ���Ԫ�ص� vector β��
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // ����Ԫ��
    std::cout << "Element at index 0: " << vec[0] << std::endl;
    std::cout << "Element at index 1: " << vec.at(1) << std::endl;//ʹ��.at() ����Խ��(��Ҳ����һ����ʮ�˵Ķ�������˵���ʮһ���˰�),���Ӱ�ȫ

    // �޸�Ԫ��
    vec[0] = 100;

    // ���� vector
    /*
        ������forѭ���Ļ����ṹ
        for (initialization; condition; iteration) {
            // ѭ���壨Ҫ�ظ�ִ�еĴ��룩
        }
        ��ʼ����initialization����
        �������ͨ�����������ͳ�ʼ��һ��ѭ�����Ʊ�����
        ��ʼ��ֻ��ѭ����ʼʱִ��һ�Ρ�

        ������飨condition����
        ��ÿ��ѭ������ǰ���м�顣
        �������Ϊtrue����ִ��ѭ���壻���Ϊfalse��ѭ����ֹ��
        
        ������iteration����
        ���������ÿ��ѭ����ִ�к����У����ڸ���ѭ�����Ʊ�����
        ͨ���������������ѭ��������
        
        ����˵�� initializationִ��һ��֮�󲻹�����  condition -> ѭ���� -> iteration -> condition .... ��ʼѭ�� һֱ��conditionΪfalseΪֹ
    */
    std::cout << "Vector elements: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // ɾ�� vector β����Ԫ��
    vec.pop_back();

    // ��� vector �Ƿ�Ϊ��
    if (vec.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        std::cout << "Vector is not empty" << std::endl;
    }

    // ��� vector �е�����Ԫ��
    vec.clear();

    std::cout << "Vector size after clear: " << vec.size() << std::endl;

    return 0;
}
