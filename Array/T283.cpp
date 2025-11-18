// 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
// 请注意 ，必须在不复制数组的情况下原地对数组进行操作。
#include <vector>
using namespace std;
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int slow = 0, fast = 0;
//         for (; fast < nums.size(); fast++)
//         {
//             if (nums[fast] != 0) {
//                 nums[slow] = nums[fast];
//                 slow++;
//             }
//         }
//         for (int i = nums.size()-1; i>=slow; i--) {
//             nums[i] = 0;
//         }
//     }
// };
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i0 = 0;  // 慢指针：指向下一个非零元素应该放的位置
        
        for (int& x : nums) {  // 快指针：遍历数组（x 是引用）
            if (x) {  // 如果 x 非零（x != 0 的简写）
                swap(x, nums[i0]);  // 交换当前元素和 i0 位置的元素
                i0++;  // 慢指针右移
            }
        }
    }
};

int main(){
    vector<int> nums = {0,1,0,3,12};
    Solution solve;
    solve.moveZeroes(nums);
    
}