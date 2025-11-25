// 给你两个整数数组 arr1 ， arr2 和一个整数 d ，请你返回两个数组之间的 距离值 。
// 「距离值」 定义为符合此距离要求的元素数目：对于元素 arr1[i] ，不存在任何元素
// arr2[j] 满足 |arr1[i]-arr2[j]| <= d 。
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int findTheDistanceValue1(vector<int> &arr1, vector<int> &arr2, int d) {
    sort(arr2.begin(), arr2.end());
        int count = 0;
        for (int i = 0; i<arr1.size(); i++) {
          int left = 0, right = arr2.size() - 1;
          while (left<=right) {
            int mid = left + (right - left) / 2;
            if (abs(arr1[i]-arr2[mid]) <= d) {
                left = mid+1;
            }
            else if(abs(arr1[i]-arr2[mid]) > d){
                right = mid - 1;
            }
          }
          if (right == -1 && left==0 ) {
            count++;
          }
        }
        return count;
  }
   int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int count = 0;
        for (int i = 0; i<arr1.size(); i++) {
          int left = 0, right = arr2.size() ;
          while (left<right) {
            int mid = left + (right - left) / 2;
            if (arr2[mid] < arr1[i] - d ) {
              left = mid + 1;
            }
            else{
                right = mid ;
            }
          }
          if (left == arr2.size() || arr2[left] > arr1[i]+d) {
            count++;
          }
        }
        return count;
    }
};



int main() {
  vector<int> arr1 = {4,5,8};
  vector<int> arr2 = {10,9,1,8};
  int d = 2;
  Solution solve;
  int a = solve.findTheDistanceValue(arr1, arr2, d);
  cout << a << endl;  
}