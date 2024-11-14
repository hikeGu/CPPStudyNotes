#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};//��СΪ5��װ��int���� ���Կ���һ��ʼ��ȷ���˴�С

    // ����Ԫ��
    std::cout << "First element: " << arr[0] << std::endl;

    // �޸�Ԫ��
    arr[0] = 10;
    std::cout << "Modified first element: " << arr[0] << std::endl;

    // ʹ�õ���������
    std::cout << "Array elements: ";
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
