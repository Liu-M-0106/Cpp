// 给你一个非递减的 有序
// 整数数组，已知这个数组中恰好有一个整数，它的出现次数超过数组元素总数的 25%。
// 请你找到并返回这个整数
#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
      int left = 0, right = 0;
      for (;right<arr.size();) {
        if (arr[left]==arr[right] ) {
          right++;
          if (right-left>arr.size()/4) {
            return arr[left];
          }
        }
        else {
            left++;
        }
      }
      return arr[left];
    }
};
int main() {
  vector<int> arr = {1, 2, 2, 6, 6, 6, 6, 7, 10};
  Solution solve;
  cout<< solve.findSpecialInteger(arr);
}