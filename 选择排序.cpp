// C 语言网
// P1738
// 对输入的n个数进行排序并输出
// 输入的第一行包括一个整数n(1<=n<=100)。 接下来的一行包括n个整数。

#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	cin >> sum;//输入n个数
	int num[sum];
	for (int i = 0; i < sum; ++i)
	{
		cin >> num[i];/* code */
	}
	
	// 选择排序排列
	for (int i = 0; i < sum; ++i)
	{
		int min = i;
		for (int j = i+1; j < sum ; ++j)
		{
			if (num[min]>num[j])
			{
				min = j;/* code */
			}/* code */
		}
		swap(num[i],num[min]);
	}

	for (int i = 0; i < sum; ++i)
	{
		cout<< num[i]<<" ";/* code */
	}
	return 0;
}