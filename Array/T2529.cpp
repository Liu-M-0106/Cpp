// 给你一个按 非递减顺序 排列的数组 nums
// ，返回正整数数目和负整数数目中的最大值。 换句话讲，如果 nums 中正整数的数目是
// pos ，而负整数的数目是 neg ，返回 pos 和 neg二者中的最大值。 注意：0
// 既不是正整数也不是负整数。

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
    }
};

int main() {
  vector<int> nums = {-2,-1,-1,1,2,3};
  Solution solve;
  int a = solve.maximumCount(nums);
  cout<<a<<endl; 
}