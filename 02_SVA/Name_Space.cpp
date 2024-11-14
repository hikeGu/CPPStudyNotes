#include<iostream>
/*
    命名空间的声明格式 using namespace::name
    可以把他当作 把namespace 下的 name 拿过来用了
    可以直接使用name
*/

namespace MyNamespace {
    // 我们定义了一个命名空间，空间里就只有一个变量
    int myVariable = 10;
}

namespace YourNamespace {
    // 我们定义了一个命名空间, 空间里只有一个函数
    void myFunction() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

//我们将命名空间中的变量myVariable 声明出来
using MyNamespace::myVariable;

int main() {
    // 我们可以直接使用变量,因为之前已经声明过了了
    std::cout << "-------------------------------声明过----------------------------------" << std::endl;
    std::cout << "myVariable: " << myVariable << std::endl;

    // 我们不能直接使用函数，因为函数没有被声明出来，只能通过这种方式使用它
    std::cout << "-------------------------------未声明----------------------------------" << std::endl;
    YourNamespace::myFunction();
    std::cout << "-------------------------------END----------------------------------" << std::endl;
}