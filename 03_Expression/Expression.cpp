#include <iostream>
#include <vector>
#include <string>

int main() {
    // 1. ���������ʽ
    int num = 100;            // ����������
    double pi = 3.14159;      // ������������
    char letter = 'A';        // �ַ�������
    const char* greeting = "Hello, World!"; // �ַ���������

    // 2. �������ʽ
    int x = num;              // num��һ���������ʽ����ֵ����x

    // 3. ������������ʽ
    int total = num + x;      // ʹ�üӷ������
    int diff = num - x;       // ʹ�ü��������
    int product = num * x;    // ʹ�ó˷������
    double quotient = pi / 2; // ʹ�ó��������
    int remainder = num % 3;  // ʹ��ȡģ�����

    // 4. ��ϵ��������ʽ
    bool isGreater = num > x; // �ж�num�Ƿ����x
    bool isLess = num < 200;  // �ж�num�Ƿ�С��200
    bool isEqual = (x == 100); // �ж�x�Ƿ����100

    // 5. �߼���������ʽ
    bool andResult = (num > 50) && (x < 150); // �߼���
    bool orResult = (num < 50) || (x < 150);  // �߼���
    bool notResult = !isEqual;                // �߼���

    // 6. ��������Ԫ����������ʽ
    int maxNum = (num > x) ? num : x;         // �����������еĽϴ���

    // 7. ��ֵ���ʽ
    int y;
    y = num;                                  // ��y��ֵ

    // 8. �������Լ���������ʽ
    int counter = 0;
    counter++; // ��׺������counter��Ϊ1
    ++counter; // ǰ׺������counter��Ϊ2
    counter--; // ��׺�Լ���counter��Ϊ1
    --counter; // ǰ׺�Լ���counter��Ϊ0

    // 9. �������ñ��ʽ
    std::cout << "Hello" << std::endl;        // std::cout��<<һ���������

    // 10. ����ת�����ʽ
    double d = 42.9;
    int i = static_cast<int>(d);              // ��dת��Ϊint�����Ϊ42

    // 11. �����±���ʽ
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int firstElement = numbers[0];            // ��������ĵ�һ��Ԫ��

    // 12. ��Ա���ʱ��ʽ
    struct Point {
        int x, y;
    };
    Point p = {3, 4};
    int px = p.x;                             // ���ʽṹ���Ա

    // 13. ָ��������ʽ
    int value = 10;
    int* ptr = &value;                        // ȡvalue�ĵ�ַ
    *ptr = 20;                                // �޸�ptrָ���ֵ

    // 14. ���ű��ʽ
    int a, b;
    a = (b = 3, b + 2);                       // ��ִ��b=3����ִ��b+2��a��ֵΪ5

    // 15. new������ʽ
    int* dynamicInt = new int(5);             // ��̬������������ʼ��Ϊ5
    delete dynamicInt;                        // �ͷŶ�̬������ڴ�


    return 0;
}
