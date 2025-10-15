// 乘法口诀表输出
#include<iostream>
using namespace std;
int main()
{
	for(int i = 1;i < 10;++i)
	{
		int j = 1;
		// do{
		// int k = j * i;
		// cout<<j<<"×"<<i<<"="<<k<<"\t";
		// if(i == j)
		// {
		// 	cout<<endl;
		// }
		// j++;
		// }while(j<=i);
		for(int j = 1;j<=i;j++)
		{
			int k = j * i;
			cout<<j<<"×"<<i<<"="<<k<<"\t";
		}
		cout<<endl;
	}

	return 0;
}