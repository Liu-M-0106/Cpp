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
      vector<int> nums1(n+1,0);
      for (int i = 0;i<n;i++) {
        nums1[i+1] = nums1[i]+ nums[i];
      }
      for (int i = 0; i < m; i++) {
        int left=0,right=n+1;
        while (left<right) {
            int mid = left + (right-left)/2;
            if (nums1[mid] <=queries[i]) {
                left = mid + 1;
            }
            else if (nums1[mid]>queries[i]) {
                right = mid;
            }
        }
        answer[i] = left-1;
      }
      return answer;
    }
};


int main() {
  vector<int> nums = {4,5,2,1};
  vector<int> queries = {3,10,21};
  Solution solve;
  vector<int> a = solve.answerQueries(nums, queries);
  for (auto b:a) {
    cout<<b<<'\n';
  }
}