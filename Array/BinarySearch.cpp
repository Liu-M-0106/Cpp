// LeetCode 
// P704  二分查找
// 给定一个n个元素有序的（升序）整型数组nums和一个目标值target，写一个函数搜索nums中的target
// 如果目标值存在返回下标，否则返回-1

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& nums,int target)
{
	int left=0,right=nums.size()-1;
// 定义right为num.size()-1，该区间为左闭右闭区间
// 定义为闭区间，则while判断时left和right可相等 
	while(left <= right){
		int mid = left + (right-left)/2;
		if (nums[mid] == target)
		{
			return mid ;
		}
		else if (nums[mid] > target)
		{
			right = mid - 1;
			// 闭区间可从mid-1开始判断
		}
		else if (nums[mid] < target)
		{
			left = mid + 1;/* code */
		}
	}
	return -1;
}

int binarySearch_open(vector<int>& nums,int target)
{
	int left=0,right=nums.size();
	while(left<right){
		int mid = left + (right-left)/2;
		if (nums[mid] == target)
		{
			return mid;
		}
		else if (nums[mid] > target)
		{
			right = mid;
		}
		else if (nums[mid] < target)
		{
			left = mid + 1;
		}
	}
	return -1;
}


int main()
{
	int nums[] = {-1,0,3,5,9,12};
	int target = 2;
	binarySearch(nums,target);

	return 0;
}