// 给你字符串 s 和整数 k 。
// 请返回字符串 s 中长度为 k 的单个子字符串中可能包含的最大元音字母数。
// 英文中的 元音字母 为（a, e, i, o, u）。
#include <iostream>
#include<string>
using namespace std;

// 个人题解：超出时间限制
// class Solution {
// public:
//   int maxVowels(string s, int k) {
//     int slow = 0, fast = slow + k, size = s.size(), count = 0;
//     while (fast <= size) {//注意fast取值和字符串大小之间的关系
//       int num=0;
//       for (int i = slow; i < fast; i++) { // 窗口内循环判断
//             if (s[i]=='a' || s[i]=='e' || s[i] == 'i' || s[i] =='o' || s[i]=='u') {
//                 num++;
//             }
//         }
//         count = max(count, num);
//         slow++;
//         fast=slow+k;
//     }
//     return count;
//     }
// };

// 个人题解2：fast逻辑混乱；fast和size判断可能导致越界；重复判断导致运行缓慢
// class Solution {
// public:
//   int maxVowels(string s, int k) {
//     int slow = 0, fast = slow + k, size = s.size();
//       int num=0;
//       for (int i = slow; i < fast; i++) { // 第一次循环
//             if (s[i]=='a' || s[i]=='e' || s[i] == 'i' || s[i] =='o' || s[i]=='u') {
//                 num++;
//             }
//       }
//       int count = num;
//       while (fast <= size) {
//         if (s[slow]=='a' || s[slow]=='e' || s[slow] == 'i' || s[slow] =='o' || s[slow]=='u') {
//             num--;
//         }
//         slow++;
//         if (s[fast]=='a' || s[fast]=='e' || s[fast] == 'i' || s[fast] =='o' || s[fast]=='u') {
//             num++;
//         }
//         fast = slow + k;
//         count = max(count, num);
//     }
//     return count;
//     }
// };

class Solution {
public:
    int maxVowels(string s, int k) {
        // 提取元音判断逻辑
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || 
                   c == 'o' || c == 'u';
        };
        
        // 初始化第一个窗口 [0, k)
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) count++;
        }
        int maxCount = count;
        
        // 滑动窗口：[i-k+1, i]
        for (int i = k; i < s.size(); i++) {
            // 右边界进入：s[i]
            if (isVowel(s[i])) count++;
            // 左边界离开：s[i-k]
            if (isVowel(s[i-k])) count--;
            
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
    }
};


int main() {
  string str = "abciiidef";
  int k = 3;
  Solution solve;
  int a = solve.maxVowels(str, k);
  cout<<a<<endl;

  return 0;
}