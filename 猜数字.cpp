#include<iostream>
using namespace std;
#include<ctime>

int main()
{
	int num = rand()% 100-0+1+0;
	cout<<"请输入你猜测数值"<<endl;
	int num1 = 0;
	cin>>num1;
	bool flag = false;
while(!flag)
{
	if(num1 > num)
	{
		cout<<"Max"<<endl;
		cin>>num1;
		flag = false;
	}
	else if(num1 < num)
	{
		cout<<"Min"<<endl;
		cin>>num1;
		flag = false;
	}
	else
	{
		cout << "correct" << endl;
		flag = true;
	}


	if (flag == true)
	{
		break;/* code */
	}
}

	return 0;

}