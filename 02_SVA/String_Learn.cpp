#include<iostream>

#include<string>
//使用string时，将string头文件包含，防止出现莫名其妙的错误

using std::string;

int main(){
    std::cout << "---------------------------创建和初始化-----------------------------" << std::endl;
    // 创建一个空字符串
    string str1;
    // 使用字符串字面量初始化
    string str2 = "Hello, World!";
    string str3("Goodbye!");

    // 使用重复字符'A'初始化，创建一个包含5个'A'的字符串
    string str4(5, 'A');  // "AAAAA"
    
    std::cout << "---------------------------操作-----------------------------" << std::endl;
    // 字符串连接
    string str5 = "Hello, ";
    string str6 = "World!";
    // 使用 + 运算符连接字符串
    string result = str5 + str6;  // "Hello, World!"
    std::cout << result << std::endl;

    // 使用 += 运算符追加字符串
    string str7 = "Hello";
    str7 += ", C++!";  // "Hello, C++!"
    std::cout << str7 << std::endl;

    std::cout << "---------------------------访问和修改-----------------------------" << std::endl;
    // 访问字符串中的字符
    char firstChar = str2[0];  // 'H'
    // 上面这个[0]就是索引的意思，可以把 string类型数据 看作是一堆 char类型的数据 按照从左到右的顺序排序，
    // 最左边的一个是0 往后依次+1
    str2[0] = 'h';  // 修改第一个字符为小写 'h'
    std::cout << str2 << std::endl; 

    // 获取字符串长度
    size_t length = str2.length(); // 或者使用 str2.size()  这个size_t类型是一个很大的整数类型，可以放非常大的数字
    std::cout << "Length of str2: " << length << std::endl;

    std::cout << "---------------------------字串操作-----------------------------" << std::endl;
    // 查找子串
    size_t pos = str2.find("World");
    //find 方法返回的是一个 size_t 类型的值，它表示子字符串在目标字符串中的起始位置索引。
    //如果子字符串未找到，find 方法会返回 std::string::npos
    if (pos != string::npos) {
        std::cout << "\"World\" found at position: " << pos << std::endl;
    } else {
        std::cout << "\"World\" not found." << std::endl;
    }

    // 从后向前查找字符
    size_t rpos = str2.rfind('l');
    std::cout << "Last 'l' found at position: " << rpos << std::endl;

    // 提取子字符串
    std::string sub = str2.substr(7, 5);  // 提取从位置7开始的5个字符
    std::cout << "Substring: " << sub << std::endl;  // Outputs "World"

    // 插入子字符串
    str2.insert(5, ", C++");  // 在索引5处插入", C++"
    std::cout << "After insertion: " << str2 << std::endl;

    // 删除子字符串
    str2.erase(5, 7);  // 从索引5开始删除7个字符
    std::cout << "After erasing: " << str2 << std::endl;

    // 替换子字符串
    str2.replace(7, 5, "Universe");  // 替换从位置7开始的5个字符
    std::cout << "After replacing: " << str2 << std::endl;

    return 0;
}
