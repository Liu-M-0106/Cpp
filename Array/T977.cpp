// 给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方
// 组成的新数组，要求也按 非递减顺序 排序。
#include <iostream>
#include <vector>
using namespace std;
// 暴力解法
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         for (int a = 0; a < nums.size(); a++) {
//             nums[a] = nums[a] * nums[a];
//         }
//         for (int b = 0; b<nums.size()-1; b++) {
//         for (int a = 0; a < nums.size()-1; a++) {
//           if (nums[a] <= nums[a + 1]) {
            
//           } else {
//             int temp = nums[a];
//             nums[a] = nums[a+1];
//             nums[a+1] = temp;
//           }
//         }
//         }


//         return nums;
//     }
// };
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int fast = nums.size() - 1, slow = 0;
      vector<int> nums1 = nums;
      int i = fast;
      while(slow<=fast){
      if (nums[fast] * nums[fast] <= nums[slow] * nums[slow]) {
        nums1[i] = nums[slow]*nums[slow];
        slow++;
      }
      else {
        nums1[i] = nums[fast]*nums[fast];
        fast--;
      }
      i--;
      }
      return nums1;
    }
};

// 代码随想录题解
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int k = A.size() - 1;
        vector<int> result(A.size(), 0);
        for (int i = 0, j = A.size() - 1; i <= j;) { // 注意这里要i <= j，因为最后要处理两个元素
            if (A[i] * A[i] < A[j] * A[j])  {
                result[k--] = A[j] * A[j];
                j--;
            }
            else {
                result[k--] = A[i] * A[i];
                i++;
            }
        }
        return result;
    }
};



int main() {
  vector<int> nums = {-4,-1,0,3,10} ;
  Solution solve;
vector<int>a = solve.sortedSquares(nums);
for (auto b : a) {
  cout<<b<<" ";
}

  
}