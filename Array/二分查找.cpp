// LeetCode 
// P704  二分查找
// 给定一个n个元素有序的（升序）整型数组nums和一个目标值target，写一个函数搜索nums中的target
// 如果目标值存在返回下标，否则返回-1















#include<iostream>
using namespace std;
int main()
{
	int nums[] = {-1,0,3,5,9,12};
	int target = 2;
	bool flag = false;
	for (int i = 0; i < int(sizeof(nums) / sizeof(nums[0])); ++i)
	{
		if (target == nums[i])
		{
			cout<<i<<endl;
			flag = true;
		}
	}


	if (flag == false)
	{
		cout<<-1<<endl;
	}

	return 0;
}