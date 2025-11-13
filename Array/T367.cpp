// 给你一个正整数 num 。如果 num 是一个完全平方数，则返回 true ，否则返回 false
// 。 完全平方数
// 是一个可以写成某个整数的平方的整数。换句话说，它可以写成某个整数和自身的乘积。
// 不能使用任何内置的库函数，如  sqrt 。
// 与T69相似（Array\T69.cpp）
#include <iostream>
using namespace std;
class Solution {
public:
  bool isPerfectSquare(int num) {
    if (num < 2) return true;  // 0 和 1 直接返回
      bool flag = false;
      int n = num,left = 0,right = num;
      while (left<=right) {
        int mid = left + (right - left) / 2;
        long long number = (long long)mid*mid;
        if (number == num) {
          flag = true;
          break;
        }
        else if (number > num) {
            right = mid -1;
        }
        else if (number < num) {
          left = mid +1;
        }
      }
      return flag;
    }
};
int main() {
  int num = 2000105819;
  Solution solve;
  bool flag = solve.isPerfectSquare(num);
  cout<<flag<<endl;
}