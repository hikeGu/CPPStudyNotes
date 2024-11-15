#include<iostream>
#include<string>

/*
    我们定义了一个函数，用来求两个int类型的和
    函数名：add
    函数参数：两个int类型的参数 分别是a 和 b
    函数返回值：int 类型 意味着调用这个函数后返回的结果会是int类型
*/
int add(int a, int b)
{
	return a + b;
}

/*
    函数重载
    函数名相同，但是参数类型或者参数个数不同，就属于函数重载
    以下函数，当我们调用时传入的参数是 一个int类型 ，那么就调用这个函数
*/
int add(int a)
{
	return a;
}

void delimiter(std::string context){
    std::cout << "--------------------------------------" <<
    context << "--------------------------------------" << std::endl;
}

/*
    常量引用
    把函数的参数绑定在某个对象上，
    我们如果直接调用如上的函数，实际上是复制了实参，这么做是会浪费一定资源的
    那么如果我们引用这个参数，就能节约这个资源，但是在函数内的更改是会直接影响到实参的
    
*/

void ref(double &a){
    a = 10;
}

/*
    如果我们不希望 对实参进行更改，我们可以使用常量引用
    既要又要呢？
*/
void const_ref(const double &a){
    // 上面的意思是说 这个参数是常量 不允许改变 传入的参数是double类型，
    // 用的是引用的方式传进来的
    // a = 10; 这是会报错的哦
    std::cout << "const_ref的值是： " << a << std::endl;
}

/*
    数组变量会被隐式的转换为指针
    在 C++ 中，当数组被传递给函数时，实际上是传递了数组的指针。
    这是因为数组名称在大多数表达式中会被隐式转换为指向其第一个元素的指针。
    因此，数组参数的形式参数实际上是一个指针，而不是整个数组本身。
*/
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int num_1 = 2;
    int num_2 = 4;
    int num_add;
    double num_3 = 22;
    /*
        我们采用这种方式调用，用 实参 替代 形参
        上方的int a 和 int b 就是形参
        他将实际参数的值也就是 num_1 num_2 复制 给 a  b
        注意，这是复制而非替换
        当然，如果你想改变 num_1 num_2 的值，你可以传一个引用参数
        因为引用是绑定在某个对象（你要更改的对象）上的
        也可以传入一个指针，因为指针的地址指向的那块内存是一样的
        就好像你复制了人家的住处地址，你可以循着复制的住处去找到他的房子并且修改
        但是如果你复制了人家的住处，那你修改你复制的住处是无法对人家的住处产生影响
    */
    delimiter("函数调用");
    num_add = add(num_1, num_2);
    std::cout << "num_add的值是： " << num_add << std::endl;
    
    delimiter("函数重载");
    num_add = add(num_1);
    std::cout << "num_add的值是： " << num_add << std::endl;
    
    delimiter("引用传递");
    std::cout << "num_3的值是： " << num_3 << std::endl;
    ref(num_3);
    std::cout << "num_3的值是： " << num_3 << std::endl;
    
    delimiter("常量引用");
    const_ref(num_3);
    // 这里我们把 num_3 的值改为5
    // 事实上num_3并不是常量 只是我们不希望函数更改他的值
    num_3 = 5;
    const_ref(num_3);
    
    delimiter("数组参数");
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);
    
    delimiter("函数指针");
    //定义一个函数指针 名字叫做 ptr_add 返回类型为int 参数为 两个int 的函数指针
    int (*ptr_add)(int, int) = add;
    num_add = ptr_add(num_1, num_2);//加上*号解引用也行
    std::cout << "num_add的值是： " << num_add << std::endl;
    
    delimiter("END");
    return 0;
}