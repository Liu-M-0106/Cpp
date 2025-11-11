// 给定一个含有 n 个正整数的数组和一个正整数 target 。
// 找出该数组中满足其总和大于等于 target 的长度最小的 子数组 [numsl, numsl+1,
// ..., numsr-1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。
#include <iostream>
#include <vector>
using namespace std;



// 个人题解
// 超出时间限制
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int fast = 0, slow = 0;
      int number = nums.size()+1;
      while (slow <= fast && fast <= nums.size()-1) {
        int a = 0;
        for (int i = slow;i<=fast ; i++) {
            a = a+nums[i];
        }
        if (a >= target) {
          if (fast - slow+1 <= number) {
          number = fast - slow+1;
          }
            slow++;
        }
        else {
        fast++;
        }
      }
      if (number != nums.size()+1) {
        return number;
      }
      else return 0;
    }
};

int main() {
  vector<int> nums = {1,1,1,1,1,1,1,1,1,1,1,1,1} ;
  int target = 20;
  Solution solve ;
  int a = solve.minSubArrayLen(target, nums);
  cout << a<<endl;


  return 0;
}