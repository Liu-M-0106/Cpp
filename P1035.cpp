// 洛谷P1035级数求和
// Sn = 1 + 1/2 + 1/3 + 1/4 + …… + 1/n
// 显然对于任意一个整数k,当n足够大时候，Sn > k
// 现给出一个整数k，求一个最小的n，使得Sn > k


// 参考答案部分for循环中对ans进行条件判断，省去内嵌if判断
// 尝试利用while循环解题

#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int n = 0;
	double S = 1;
	cout<<"input a number:";
	cin>>k;
	for( n = 2; n>0 ;  ++n)
	{
		S = S + 1.0/n;
		if (S > k)
		{
			cout<<"Min N is:"<<n<<endl;
			break;
		}
	}
	return 0;
}



// int n, i;//i要存着！！！
// int main()
// {
// 	cin >> n;//输入
// for(i = 1; ans <= n;i++)
// 	{
//         ans += 1.0 / i;//模拟
// 	}
// 	cout << i - 1;//注意是i - 1，此时的i已经“++”
// 	return 0;
// }