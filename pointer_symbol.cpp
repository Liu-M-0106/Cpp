
#include <iostream>
using namespace std;

int main()
{
    // 1) 普通变量
    int ival2 = 42;
    cout << "ival2 = " << ival2 << ", &ival2 = " << &ival2 << endl;

    // 2) & 出现在声明处 -> 引用（r 是 ival2 的别名）
    int &r = ival2; // & 是声明的一部分：r 是引用
    r = 100;        // 修改 r 等同于修改 ival2
    cout << "after r=100 -> ival2 = " << ival2 << ", r = " << r << endl;
    // int a = ival2;

    // 是值拷贝：a 得到 ival2 的当前值，两者互不影响。修改 a 不会改变 ival2，修改 ival2 也不会改变 a。
    // a 和 ival2 各自占独立内存。
    // int &r = ival2;

    // r 是 ival2 的别名（reference）：r 与 ival2 指向同一对象，任何通过 r 的读写都直接作用于 ival2。
    // 不能“重新指向”另一个变量（不能 reseat），必须在声明时初始化且通常只能绑定到可修改的左值（非 const 引用）。

    // 3) * 出现在声明处 -> 指针变量声明（p 是指向 int 的指针）
    int *p; // * 是声明的一部分：p 的类型是 int*
    // 4) & 出现在表达式中 -> 取地址运算符
    p = &ival2; // &ival2 得到地址（一个 int*），赋给指针 p
    cout << "p (address) = " << p << ", *p (value) = " << *p << endl;

    // 5) * 出现在表达式中 -> 解引用，访问指针指向的对象
    *p = 200; // 通过解引用修改 ival2 的值
    cout << "after *p=200 -> ival2 = " << ival2 << ", *p = " << *p << endl;

    // 6) 组合：& 出现在声明处，* 出现在表达式中
    int &r2 = *p; // 右侧 *p 是表达式（解引用得到 int），然后 & 在声明中表示 r2 是引用
    cout << "r2 (引用绑定到 *p) = " << r2 << ", &r2 = " << &r2 << endl;

    // 演示指针复制（地址复制）与值复制的区别
    int *ptr3 = p; // 复制指针值（地址），ptr3 与 p 指向相同对象
    *ptr3 = 300;   // 修改会反映到 ival2（被多个指针/引用共享）
    cout << "after *ptr3=300 -> ival2 = " << ival2 << ", *p = " << *p << ", r = " << r << endl;

    // ptrs是含有10个整数指针的数组
    int *ptrs[10];
    // 错误, 不存在引用的数组
    // int& refs[10] = /*?*/;
    // Parray指向一个含有10个整数的数组
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int (*Parray)[10] = &arr;
    cout << "Address of arr: " << arr << ", Address via Parray: " << *Parray << endl;
    // arrRef 引用一个含有10个整数的数组
    int (&arrRef)[10] = arr;
    cout << "Address of arr: " << arr << ", Address via arrRef: " << arrRef << endl;

    

    return 0;
}