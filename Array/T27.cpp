// 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val
// 的元素。元素的顺序可能发生改变。然后返回 nums 中与 val 不同的元素的数量。
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int fast = 0, slow = 0;
    for (fast = 0; fast < nums.size();fast++) {
        if (nums[fast] != val) {
          nums[slow] = nums[fast];
          slow++;
        }
    }
    return slow;
    }
    
};

int main() {
  vector<int> nums = {3,2,2,3};
  int val = 3;
  Solution solve;
  int k = solve.removeElement(nums, val); // length
  cout << k;

  return 0;
  
}
    