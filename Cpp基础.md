# 指针
### [指针基础定义](pointer_Define.cpp)
>int *p = &x;
//p = &x，即x的地址
//*p =x = num，即x的赋值

如果`*p = 20`,会修改x的值
如果`p=&y`,不会改变x的值，而是将指针p指向了另一个地址y
空指针`int *p = nullptr` 空指针bool值为false


### [指针符号*和&的不同用法](pointer_symbol.cpp)
在声明处：& 表示“引用类型的一部分”；* 表示“指针类型的一部分”。
在表达式中：& 是“取地址”；* 是“解引用（访问指针指向的值）”。
引用（int &r）是目标对象的别名；指针（int *p）是保存地址的变量，解引用后可读写目标对象。
int *&ptr 是引用到指针，通过它可以直接改变指针或指针指向的数据。


# 数组理论基础
**Notice：**
1.数组下标都是从0开始——索引从0开始
2.数组内存空间地址是连续的——增删元素时需要移动其他元素地址
* cpp中二维数组地址连续
* Java中不连续

![alt text](Picture\增删数组.png)

**Note：数组的元素是不能删除的，只能进行覆盖**

遍历数组方法：
+ `for(size_t i = 0; i < sizeof(arr)/sizeof(int);++i)` 
+ `int *e = arr + 10 ；for(int *b = arr;b != e;++b)`
+ `int *beg = std::begin(arr), *end=std::end(arr);for(auto it = beg;it != end;++it)`

