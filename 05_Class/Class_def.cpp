#include <iostream>



/*
    ������һ���򵥵���Ķ����ʹ��ʾ����
    ����ĸ�ʽ�ǣ�
    class ���� {}
    ���У�private ��˽�г�Ա��public �ǹ��г�Ա�� ��Ա���������ͱ�����
    ˽�г�Ա���������ⲿ�޷����ʺ��޸ĵĳ�Ա�������г�Ա����������ⲿ���ʺ��޸ġ�
*/
class MyClass {
private:
    // ˽�г�Ա����
    int data;

public:
    /*
        ���캯�������ڳ�ʼ������
        ���캯���ĸ�ʽ�ǣ�
        ����(�����б�) : ��Ա�б� {}
    */
    // ������һ���յĹ��캯�������ڴ���һ��Ĭ�ϵĶ��������û���κεĹ��캯������������Ĭ���ṩһ���޲εĹ��캯����
    // �����ҽ������ۺ�ʱ����������
    MyClass(){
        // ���ۺ�ʱ ���ĳ�Ա��������Ĭ�ϴ���һ�� *this ��ָ�룬�������ŵ��������Ǹ�����
        this->data = 0;
        //Ҳ����ʹ�� data = 0;
    }
    //��Ȼ ������Լ�д��һ���вι��죬ͬʱ��ϣ���������ٸ�������һ��Ĭ�ϵ��޲ι��������
    // MyClass() = default;
    
    /*
        (int initialValue) �ǹ��캯���Ĳ����б�
        ��ʾ������캯������һ�� int ���͵Ĳ�������Ϊ initialValue��

        data(initialValue) ��ʾ������ initialValue ��ֵ���ڳ�ʼ����Ա���� data��

        ����������У����캯�����ǿյ� {}����ζ�ų��˳�ʼ���б��еĲ����⣬���캯����û�������߼���
    */
    MyClass(int initialValue) : data(initialValue) {}

    // ���г�Ա����
    void setData(int value) {
        data = value;
    }

    int getData() const {
        return data;
    }
};

int main() {
    MyClass obj(10);         // �������󲢳�ʼ��
    std::cout << obj.getData() << std::endl;

    obj.setData(20);         // �޸�����
    std::cout << obj.getData() << std::endl;

    return 0;
}
