#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
	// 定义ptr2并且赋值，指向var地址
	int var = 10;
	int *ptr2 = &var;

	std::cout << "var 的地址为: " << &var << std::endl;
	std::cout << "ptr2 存储的值为: " << ptr2 << " var的地址相同" << std::endl;
	std::cout << "ptr2 指向的值为: " << *ptr2 << " var的值" << std::endl;
	std::cout << "ptr2 地址为: " << &ptr2 << std::endl;

	// ptr_address 存储ptr2的地址
	int **ptr_address = &ptr2;
	std::cout << "ptr_address 的值为: " << ptr_address << " ptr2的地址" << std::endl;

	int *ptr3 = ptr2;
	std::cout << "ptr3 存储的值为: " << ptr3 << " var的地址相同" << std::endl;
	std::cout << "ptr3 指向的值为: " << *ptr3 << " var的值" << std::endl;
	std::cout << "ptr3 地址为: " << &ptr3 << std::endl;
	// 在这个代码第三部分int *ptr3=ptr2中，可以理解为int a =10; int b = a这样的，即利用一个已赋值的类型再次给另一个同类型的空白值进行赋值
	// 但需要注意的是，这里ptr3和ptr2是两个不同的指针变量，它们各自有自己的地址（&ptr2和&ptr3），但它们都指向同一个内存地址（var的地址），因此*ptr2和*ptr3的值是相同的。
	// 修改ptr3的值会影响var的值，因为它们指向同一个内存地址

	// 访问对象
	int ival = 42;
	// p_int存放着ival的地址，或者说p_int是指向变量ival的指针
	int *p_int = &ival;
	// 由符号*得到指针p所指向的对象，输出42
	std::cout << *p_int << std::endl;
	// 由符号*得到指针p所指向的对象，即可经由p_int为变量ival赋值
	*p_int = 0;
	std::cout << *p_int << std::endl;
	// 打印ival的值
	std::cout << "ival 的值为" << ival << std::endl;

	int x = 10;
	int y = 20;
	int *ptr ;
	ptr = &x;
	
	*ptr = 30;   // 修改 ptr 指向对象的值：x 变为 30
	cout << "x 的值为" << x << std::endl;
	cout << *ptr << std::endl;
	cout << ptr << std::endl;
	// 此时 x == 30
	
	ptr = &y;    // 改变指针本身的值：ptr 现在指向 y，x 不变
	*ptr = 40;   // 修改 y 的值为 40
	cout << "y 的值为" << y << std::endl;
	cout << *ptr << std::endl;
	cout << ptr << std::endl;

	return 0;
}