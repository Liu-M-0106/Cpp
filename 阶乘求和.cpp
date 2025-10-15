// C语言网
// P 1014
// 阶乘求和
// 求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。

#include<iostream>
using namespace std;
// int main()
// {
// 	int num = 0;
// 	cin >> num;
// 	int S = 1;
// 	for (int j = num; j > 1 ; --j)
// 	{
// 		int S1 = 1;
// 		for (int i = j; i > 0; --i)
// 		{
// 			S1 = S1 * i;
// 		}
// 		S = S + S1;
// 	}
	
// 	cout << S <<endl;

// 	return 0;
// }

// 优化后代码：

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;
	long long sum = 0, fact = 1;
	for (int i = 1; i <= num; ++i) {
    	fact *= i;
    	sum += fact;
	}
	cout << sum << endl;
	/* code */
	return 0;
}
