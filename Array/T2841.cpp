// 给你一个整数数组 nums 和两个正整数 m 和 k 。
// 请你返回 nums 中长度为 k 的 几乎唯一 子数组的 最大和 ，如果不存在几乎唯一子数组，请你返回 0 。
// 如果 nums 的一个子数组有至少 m 个互不相同的元素，我们称它是 几乎唯一 子数组。
// 子数组指的是一个数组中一段连续 非空 的元素序列。


#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  long long maxSum(vector<int> &nums, int m, int k) {
    int count = 0,sum = 0,number = 0;
      for (int i = 0,fast = 1; i < nums.size() ; i++) {
        if (nums[i] != nums[fast]) {
          count++;
        }
        sum += nums[i];
        if (i<k-1) {
            continue;
        }
        if (count >= m) {
            number = max(number,sum);
        }
        int left = i - k + 1;
        sum -= nums[left];
      }
      return number;
    }
};

int main() {
  vector<int> nums={2,6,7,3,1,7};
  int m = 3, k = 4;
  Solution solve;
  long long a = solve.maxSum(nums, m, k);
  cout<<a;
  return 0;
}