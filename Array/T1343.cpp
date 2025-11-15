// 给你一个整数数组 arr 和两个整数 k 和 threshold 。

// 请你返回长度为 k 且平均值大于等于 threshold 的子数组数目。
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
      int sum = 0,count = 0, left = 0, right = k - 1;
      for (int i = left; i<arr.size(); i++) {
        sum += arr[i];
        if (i < k - 1) {
           continue;
        }
        if (sum/k>=threshold) {
            count++;
        }
        sum -= arr[left];
        left++;
      }
      return count;
    }
};

int main() {
  vector<int> arr = {11,13,17,23,29,31,7,5,2,3} ;
  int k = 3,threshold = 5;
  Solution solve ;
  int a = solve.numOfSubarrays(arr,k,threshold);
  cout << a<<endl;


  return 0;
}