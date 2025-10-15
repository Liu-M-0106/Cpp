// 逢7过(0~300)
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	cout<<"请随机说出一个0~300数字"<<endl;
	cin>>num;
	for(num=num+1; num<=300;num++)
	{
		if (num<100)
		{
			if(num%7 == 0 || num%10 == 7 || num/10 == 7)//7的倍数  个位数含有7  十位数含有7
			{
				cout<<"过"<<endl;
			}
			else
			{
				cout<<num<<endl;
			}
		}
		if (100<=num && num<=300)
		{
			if(num%7 == 0 || num%10 == 7 || num/10 == 7)//7的倍数  个位数含有7  十位数含有7
			{
				cout<<"过"<<endl;
			}
			else
			{
				cout<<num<<endl;
			}
		}

	}


	return 0;
}