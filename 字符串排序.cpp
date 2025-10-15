// 字符串排序

// #include<iostream>
// #include <string>
// using namespace std;

// int main(int argc, char const *argv[])
// {
// 	string str1,str2,str3;
// 	cin>>str1>>str2>>str3;
// 	string max,min,mid;
// 	if (str1 >= str2)
// 	{
// 		str1>str3 ? 
//         (max=str1,
//             str3>str2?
//             mid=str3,min=str2
//             :mid=str2,min=str3):
// 		max=str3,mid=str1,min=str2;/* code */
// 	}
// 	else{
// 		str2>str3 ? (max=str2,str3>str1?mid=str3,min=str1:mid=str1,min=str3):
// 		max=str3,mid=str2,min=str1;
// 	}
// 	cout<<min<<endl<<mid<<endl<<max;
// 	return 0;
// }

// 优化后代码：
// 利用vector以及sort直接进行排序
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> strs(3);
    for (auto& s : strs) cin >> s;
    sort(strs.begin(), strs.end());
    for (const auto& s : strs) cout << s << endl;
    return 0;
}