// 给你一个长度为 n 下标从 0 开始的字符串 blocks ，blocks[i] 要么是 'W' 要么是
// 'B' ，表示第 i 块的颜色。字符 'W' 和 'B' 分别表示白色和黑色。 给你一个整数 k
// ，表示想要 连续 黑色块的数目。 每一次操作中，你可以选择一个白色块将它 涂成
// 黑色块。 请你返回至少出现 一次 连续 k 个黑色块的 最少 操作次数。
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
  int minimumRecolors(string blocks, int k) {
    int left = 0,count = 0,num = blocks.length();
    for (int i = 0; i < blocks.length(); i++) {
      if (blocks[i] == 'W') {
        count++;
      }
      if (i<k-1) {
      continue;
      }
      num = min(num,count);
      if (blocks[left] == 'W') {
        count --;
      }
      left++;
    }
    return num;
    }
};
int main() {
  string blocks = "BWWWBB";
  int k = 6;
  Solution solve;
  int a = solve.minimumRecolors(blocks, k);
  cout<<a<<endl;

  return 0;
}