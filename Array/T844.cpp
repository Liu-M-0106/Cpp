// 给定 s 和 t
// 两个字符串，当它们分别被输入到空白的文本编辑器后，如果两者相等，返回 true 。#
// 代表退格字符。 注意：如果对空文本输入退格字符，文本继续为空。

#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
      string str1, str2;
      for (int slow=0,fast=0; fast<s.length(); fast++) {
        if (s[fast] != '#') {
          str1 += s[fast];
          slow++;
        } else {
          if (str1.empty()) {
            continue;
          }
          slow--;
          str1.erase(slow);
        }
      }
      for (int slow=0,fast=0; fast<t.length(); fast++) {
        if (t[fast] != '#') {
          str2 += t[fast];
          slow++;
        } else {
          if (str2.empty()) {
            continue;
          }
          slow--;
          str2.erase(slow);
        }
      }
      if (str1 == str2) {
        return true;
      }
      else {
      return false;
      }
    }
};
int main() {
  string s = "a##b";
  string t = "#c#b";
  Solution solve;
  bool flag = solve.backspaceCompare(s, t);
  cout<<flag;
  
}