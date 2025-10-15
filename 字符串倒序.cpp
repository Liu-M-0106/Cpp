#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	// // 反转
	string str;
	getline(cin,str);
	
	reverse(str.begin(),str.end());
	cout<<str<<endl;

	// // 字符串连接
	// string str1;
	// getline(cin,str1);
	// string str2;
	// getline(cin,str2);
	// string line = str1 + str2;
	// cout<<line;


	// // 顺序输出元音字母
	// string str;
	// getline(cin,str);
	// // size_t word = str.find("a");
	// for (auto a : str)
	// {
	// 	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    //     {
	// 		cout<<a;
    //     }
		
	// }



	return 0;
}