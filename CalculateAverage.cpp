// 计算平均值并输出大于平均值的个数
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int num[9];
// 	int sum = 0;
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		cin>>num[i];
// 		sum += num[i];
// 	/* code */
// 	}
// 	float average = sum / 10.0;
// 	int k = 0;
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		if (num[i] > average)
// 		{
// 			k += 1;
// 			/* code */
// 		}/* code */
// 	}
// 	cout<<k;
// 	return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num(10);
    int sum = 0;
    for (auto &x : num) {
        cin >> x;
        sum += x;
    }
    double average = sum / 10.0;
    int count = 0;
    for (auto x : num) {
        if (x > average) count++;
    }
    cout << count << endl;
    return 0;
}