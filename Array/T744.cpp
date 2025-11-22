// 给你一个字符数组 letters，该数组按非递减顺序排序，以及一个字符 target。letters 里至少有两个不同的字符。
// 返回 letters 中大于 target 的最小的字符。如果不存在这样的字符，则返回 letters 的第一个字符。

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0,right = letters.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(letters[mid] > target){
                right = mid -1;
            }
            else if(letters[mid] <= target){
                left = mid+1;
            }
        }
        if (left < letters.size() && letters[left]>target) {
            return letters[left];
        }
        else return letters[0];
        
    }
};

int main() {
  vector<char> letters = {'c', 'f', 'j'};
  char target = 'd';
  Solution solve;
  char a = solve.nextGreatestLetter(letters, target);
  cout<<a<<endl;
}