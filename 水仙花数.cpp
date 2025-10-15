// 水仙花数
// 1^3 + 5^3 + 3^3 = 153
// 每个位置上的数三次幂之和等于其本身
// 求所有三位数中的水仙花数

#include<iostream>
using namespace std;
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	for(int num = 100; num <1000; num++){
		num1 = num / 100;
		num2 = num / 10 % 10;
		num3 = num - num2*10 - num1*100; //num3 = num %10
		if(num1*num1*num1 + num2*num2*num2 + num3*num3*num3 == num)
		{
			cout<<"水仙花数为："<<num<<endl;
		}
	}




	return 0;
}