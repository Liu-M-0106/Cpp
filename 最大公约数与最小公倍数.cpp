// 用两个函数求解最大公约数与最小公倍数

#include<iostream>

using namespace std;
// 最大公约数
int gcd(int a,int b)
{
	if (a % b ==0)
	{
		return b;
	}
	for (int i = b; i > 1; --i)
	{
		if (b%i==0 & a%i ==0)
		{
			return i;
		}
	}
	return 0;
}
// 优化代码：
// 利用辗转相除法提高计算效率
// 最大公约数（欧几里得算法）
int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// 最小公倍数
int lcm(int a,int b,int m)
{
	int num = a * b / m;
	return num;
	
}





int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int max,min;
	a>=b ? (max=a,min=b):(max=b,min=a);	
	int m = gcd(max,min);
	int n = lcm(max,min,m);
	cout<<m<<" "<<n;
	return 0;
}


