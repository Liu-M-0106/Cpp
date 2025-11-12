// // 在排序数组中查找元素的第一个和最后一个位置
// // 给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。
// // 如果数组中不存在目标值 target，返回 [-1, -1]。
// // 你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。
#include<iostream>
#include<vector>
using namespace std;

// 个人题解（两个二分法分别判断左右区间）
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//     	int left = left_nums(nums,target);
//     	int right = right_nums(nums,target);
//     	vector<int> back = {left,right};
//     	return back;
//     }

// private:
// 	int left_nums(vector<int>&nums , int target)
// 	{
// 		int left = 0,right = nums.size()-1;
// 		while(left<=right){
// 			int mid = left + (right-left)/2;
// 			if (nums[mid] > target)
// 			{
// 				right = mid - 1;
// 			}
// 			else if (nums[mid] < target)
// 			{
// 				left = mid + 1;
// 			}
// 			else if (nums[mid] == target)
// 			{
// 				if (mid == 0 || nums[mid-1] != target)
// 				{
// 					return mid;
// 				}
// 				else {
// 					right = mid-1;
// 				}
// 			}
// 		}

// 		return -1;
// 	}


// 	int right_nums(vector<int>&nums,int target)
// 	{
// 		int left = 0,right = nums.size()-1;
// 		while(left<=right){
// 			int mid = left + (right-left)/2;
// 			if (nums[mid] > target)
// 			{
// 				right = mid - 1;
// 			}
// 			else if (nums[mid] < target)
// 			{
// 				left = mid + 1;
// 			}
// 			else if (nums[mid] == target)
// 			{
// 				if (mid == nums.size()-1 || nums[mid+1] != target)
// 				{
// 					return mid;
// 				}
// 				else {
// 					left = mid+1;
// 				}
// 			}
// 		}

// 		return -1;
// 	}
// };
// 代码随想录题解（两个二分法分别判断左右区间）
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int leftBorder = getLeftBorder(nums, target);
//         int rightBorder = getRightBorder(nums, target);
//         // 情况一
//         if (leftBorder == -2 || rightBorder == -2) return {-1, -1};
//         // 情况三
//         if (rightBorder - leftBorder > 1) return {leftBorder + 1, rightBorder - 1};
//         // 情况二
//         return {-1, -1};
//     }
// private:
//      int getRightBorder(vector<int>& nums, int target) {
//         int left = 0;
//         int right = nums.size() - 1;
//         int rightBorder = -2; // 记录一下rightBorder没有被赋值的情况
//         while (left <= right) {
//             int middle = left + ((right - left) / 2);
//             if (nums[middle] > target) {
//                 right = middle - 1;
//             } else { // 寻找右边界，nums[middle] == target的时候更新left
//                 left = middle + 1;
//                 rightBorder = left;
//             }
//         }
//         return rightBorder;
//     }
//     int getLeftBorder(vector<int>& nums, int target) {
//         int left = 0;
//         int right = nums.size() - 1;
//         int leftBorder = -2; // 记录一下leftBorder没有被赋值的情况
//         while (left <= right) {
//             int middle = left + ((right - left) / 2);
//             if (nums[middle] >= target) { // 寻找左边界，nums[middle] == target的时候更新right
//                 right = middle - 1;
//                 leftBorder = right;
//             } else {
//                 left = middle + 1;
//             }
//         }
//         return leftBorder;
//     }
// };
// 标准题解（两次半开区间二分法判断）
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         if(nums.size()==0) return {-1,-1};
//         int left = 0;
//         int right = nums.size();
//         while(left<right){
//             int mid = (left+right)/2;
//             if(nums[mid]>target) right = mid;
//             else left = mid+1;
//         }
//         int r = right;
//         left = 0;
//         right = nums.size();
//         while(left<right){
//             int mid = (left+right)/2;
//             if(nums[mid]>=target) right = mid;
//             else left = mid+1;
//         }
//         int l =  right;
//         if(l<nums.size()&&nums[l]==target)
//         {
//             return {l,r-1};
//         }
//         return {-1,-1};
//     }
// };

// // 自写题解-10.26参考标准题解-注意if部分
// class Solution{
// public:
// 	vector<int> searchRange(vector<int>& nums, int target){
// 		if (nums.size() == 0)
// 		{
// 			return {-1,-1};
// 		}
// 		int left = 0,right = nums.size();
// 		while(left<right)
// 		{
// 			int mid = left + (right - left)/2;
// 			if (nums[mid] > target)
// 			{
// 				right = mid;
// 			}
// 			else left = mid + 1;
// 		}
// 		int r = right-1;
//         left = 0;
//         right = nums.size();
//         while(left < right)
// 		{
// 			int mid = left + (right - left)/2;
// 			if (nums[mid] >= target)
// 			{
// 				right = mid;
// 			}
// 			else left = mid + 1;
// 		}
// 		int l = right;
// 		// if (l>=r )
// 		// {
// 		// 	return {-1,-1};
// 		// }
// 		// else {return {l,r};}
//         if (l < nums.size() && nums[l] == target)
//         {
//             return {l, r};
//         }
//         return {-1, -1};
// 	}
// };
// 10.28 自写题解-参考标准题解-注意结果输出if部分存在隐患
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0,right = nums.size();
        while(left<right){
            int mid = left + (right - left)/2;
            if(nums[mid] > target){
                right = mid;
            }
            else {left = right + 1;}
        }
        int r = right -1;
        left = 0,right = nums.size();
        while(left < right){
            int mid = left + (right-left)/2;
            if(nums[mid]>= target){
                right = mid;
            }
            else {left = mid + 1;}
        }
        int l = right;
        if(l<=r & nums.size() != 0){
            return {l,r};
        }
        else {return {-1,-1};}
    }
};

int main()
{
	vector<int> nums = {1};
	int target = 1;
	Solution sol;
	vector<int> back = sol.searchRange(nums,target);
	cout<<back[0]<<" "<<back[1]<<endl;
	return 0;
}

