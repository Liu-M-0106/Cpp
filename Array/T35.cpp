#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0,right = nums.size()-1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                right = mid-1;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
        }
        return -1;
    }
};


int main(){
    vector<int> nums = {1,3,5,6};
    int target = 2;
    Solution sol;
    int a = sol.searchInsert(nums,target);
    cout<<a;
    return 0;
}