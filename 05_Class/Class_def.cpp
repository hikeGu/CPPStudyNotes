#include <iostream>



/*
    如下是一个简单的类的定义和使用示例。
    定义的格式是：
    class 类名 {}
    其中，private 是私有成员，public 是公有成员。 成员包括函数和变量。
    私有成员就是在类外部无法访问和修改的成员，而公有成员则可以在类外部访问和修改。
*/
class MyClass {
private:
    // 私有成员变量
    int data;

public:
    /*
        构造函数，用于初始化对象
        构造函数的格式是：
        类名(参数列表) : 成员列表 {}
    */
    // 如下是一个空的构造函数，用于创建一个默认的对象。如果你没有任何的构造函数，编译器会默认提供一个无参的构造函数。
    // 所以我建议无论何时都最好完成它
    MyClass(){
        // 无论何时 他的成员方法都会默认传入一个 *this 的指针，它代表着调用它的那个对象
        this->data = 0;
        //也可以使用 data = 0;
    }
    //当然 如果你自己写了一个有参构造，同时又希望编译器再给你生成一个默认的无参构造你可以
    // MyClass() = default;
    
    /*
        (int initialValue) 是构造函数的参数列表，
        表示这个构造函数接收一个 int 类型的参数，名为 initialValue。

        data(initialValue) 表示将参数 initialValue 的值用于初始化成员变量 data。

        在这个例子中，构造函数体是空的 {}，意味着除了初始化列表中的操作外，构造函数中没有其他逻辑。
    */
    MyClass(int initialValue) : data(initialValue) {}

    // 公有成员函数
    void setData(int value) {
        data = value;
    }

    int getData() const {
        return data;
    }
};

int main() {
    MyClass obj(10);         // 创建对象并初始化
    std::cout << obj.getData() << std::endl;

    obj.setData(20);         // 修改数据
    std::cout << obj.getData() << std::endl;

    return 0;
}
