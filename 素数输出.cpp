// 筛选0-100内的素数
// #include<iostream>
// using namespace std;
// int main()
// {
// 	for (int num = 2; num<100; num++)
// 	{
// 		int i ;
// 		for ( i=2 ; i < num/2 ; ++i)
// 		{
// 			if ( num % i == 0)
// 			{
// 				break;
// 			}
// 		}
// 		if (i > num/2 -1)
// 		{
// 			cout<<"素数是："<<num<<endl;/* code */
// 		}
		
// 	}
// 	return 0;
// }s
#include<iostream>
using namespace std;

int main()
{
	int i;
	for(i=2;i<=100;i++){
		bool flag=true;
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag=false;
				break;
			}
		}
		if(flag==true)
		cout<<i<<endl;
	}
}

