#include<iostream>

#include<string>
//ʹ��stringʱ����stringͷ�ļ���������ֹ����Ī������Ĵ���

using std::string;

int main(){
    std::cout << "---------------------------�����ͳ�ʼ��-----------------------------" << std::endl;
    // ����һ�����ַ���
    string str1;
    // ʹ���ַ�����������ʼ��
    string str2 = "Hello, World!";
    string str3("Goodbye!");

    // ʹ���ظ��ַ�'A'��ʼ��������һ������5��'A'���ַ���
    string str4(5, 'A');  // "AAAAA"
    
    std::cout << "---------------------------����-----------------------------" << std::endl;
    // �ַ�������
    string str5 = "Hello, ";
    string str6 = "World!";
    // ʹ�� + ����������ַ���
    string result = str5 + str6;  // "Hello, World!"
    std::cout << result << std::endl;

    // ʹ�� += �����׷���ַ���
    string str7 = "Hello";
    str7 += ", C++!";  // "Hello, C++!"
    std::cout << str7 << std::endl;

    std::cout << "---------------------------���ʺ��޸�-----------------------------" << std::endl;
    // �����ַ����е��ַ�
    char firstChar = str2[0];  // 'H'
    // �������[0]������������˼�����԰� string�������� ������һ�� char���͵����� ���մ����ҵ�˳������
    // ����ߵ�һ����0 ��������+1
    str2[0] = 'h';  // �޸ĵ�һ���ַ�ΪСд 'h'
    std::cout << str2 << std::endl; 

    // ��ȡ�ַ�������
    size_t length = str2.length(); // ����ʹ�� str2.size()  ���size_t������һ���ܴ���������ͣ����Էŷǳ��������
    std::cout << "Length of str2: " << length << std::endl;

    std::cout << "---------------------------�ִ�����-----------------------------" << std::endl;
    // �����Ӵ�
    size_t pos = str2.find("World");
    //find �������ص���һ�� size_t ���͵�ֵ������ʾ���ַ�����Ŀ���ַ����е���ʼλ��������
    //������ַ���δ�ҵ���find �����᷵�� std::string::npos
    if (pos != string::npos) {
        std::cout << "\"World\" found at position: " << pos << std::endl;
    } else {
        std::cout << "\"World\" not found." << std::endl;
    }

    // �Ӻ���ǰ�����ַ�
    size_t rpos = str2.rfind('l');
    std::cout << "Last 'l' found at position: " << rpos << std::endl;

    // ��ȡ���ַ���
    std::string sub = str2.substr(7, 5);  // ��ȡ��λ��7��ʼ��5���ַ�
    std::cout << "Substring: " << sub << std::endl;  // Outputs "World"

    // �������ַ���
    str2.insert(5, ", C++");  // ������5������", C++"
    std::cout << "After insertion: " << str2 << std::endl;

    // ɾ�����ַ���
    str2.erase(5, 7);  // ������5��ʼɾ��7���ַ�
    std::cout << "After erasing: " << str2 << std::endl;

    // �滻���ַ���
    str2.replace(7, 5, "Universe");  // �滻��λ��7��ʼ��5���ַ�
    std::cout << "After replacing: " << str2 << std::endl;

    return 0;
}
