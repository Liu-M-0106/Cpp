// 给你一个长度为 n 的整数数组 nums ，和一个长度为 m 的整数数组 queries 。
// 返回一个长度为 m 的数组 answer ，其中 answer[i] 是 nums 中 元素之和小于等于 queries[i] 的 子序列 的 最大 长度  。
// 子序列 是由一个数组删除某些元素（也可以不删除）但不改变剩余元素顺序得到的一个数组。


#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
      int n = nums.size(), m = queries.size();
      vector<int> answer(m, 0);
      sort(nums.begin(), nums.end());
      for (int i = 0;i<m; i++) {
        int left = 0, right = 0, sum = 0, count = 0;
        for (;right < n;right++) {
          sum += nums[right];
          if (sum > queries[i]) {
            break;
          }
        }
        answer[i] = right-left;
      }



      return answer;
    }
};

int main() {
  vector<int> nums = {2,3,4,5};
  vector<int> queries = {1};
  Solution solve;
  vector<int> a = solve.answerQueries(nums, queries);
  for (auto b:a) {
    cout<<b<<'\n';
  }
}