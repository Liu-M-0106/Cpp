// 给你两个正整数数组 spells 和 potions ，长度分别为 n 和 m ，其中 spells[i]
// 表示第 i 个咒语的能量强度，potions[j] 表示第 j 瓶药水的能量强度。
// 同时给你一个整数 success 。一个咒语和药水的能量强度 相乘 如果 大于等于
// success ，那么它们视为一对 成功 的组合。 请你返回一个长度为 n 的整数数组
// pairs，其中 pairs[i] 是能跟第 i 个咒语成功组合的 药水 数目。
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> successfulPairs1(vector<int>& spells, vector<int>& potions, long long success) {
      int n = spells.size(), m = potions.size();
      vector<int>a(n);
      for (int i = 0; i <= n - 1; i++) {
        int count = 0;
        for (int j = 0; j <= m - 1; j++) {
          long long num = spells[i]*potions[j];
            if (num >= success) {
                count++;
            }
        }
        a[i] = count;
      }
      return a;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
      int n = spells.size(), m = potions.size();
      vector<int> a(n);
      sort(potions.begin(), potions.end());
    //   内循环二分查找
      for (int i = 0; i <= n - 1; i++) {
        int left = 0, right = m - 1;
        while (left <= right) {
          int mid = left + (right - left) / 2;
          long long num = (long long)spells[i]*potions[mid];
          if (num >= success) {
            right = mid-1;
          }
          else{
            left = mid+1;
          }
        }    
        a[i] = m-left;
      }
      return a;
    }
};

int main() {
  vector<int> spells = {5, 1, 3};
  vector<int> potions = {9,8,6,9,5,1,2,3,5};
  long long success = 7;
  Solution solve;
  vector<int> a = solve.successfulPairs1(spells, potions, success);
  for (auto b : a) {
    cout<<b<<'\n';  
  }
}