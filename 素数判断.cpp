#include<iostream>
#include<math.h>
using namespace std;


void ifPrime(int num)
{
	bool flag;
	for (int i = 2; i < num /2; ++i)
	{
		flag  = false;
		if (num % i  == 0)
		{
			flag = true;
			cout << "not prime"<<endl;
			break;
		}

	}
	if (flag   == false)
	{
		cout<<"prime"<<endl;
	}
}


void ifPrime_change(int num)
{
	int num1 = sqrt(num);
	if (num < 2)
	{
		cout<<"prime"<<endl;
		return;
		/* code */
	}
	for (int i = 2; i < num1; ++i)
	{
		if (num % i == 0)
		{
			cout<<"not prime"<<endl;
			return;
		}/* code */
	}
	cout<<"prime"<<endl;
}

int main()
{
	int num    = 0;
	cin >> num;
	// ifPrime(num);
	ifPrime_change(num);
	return 0;
}