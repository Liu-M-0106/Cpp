// 给你一个正整数 n ，生成一个包含 1 到 n2
// 所有元素，且元素按顺时针顺序螺旋排列的 n x n 正方形矩阵 matrix 。

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>matrix(n,vector<int>(n,0));
      int start_x = 0, start_y = 0,r = 0,count=1,offset = 0;
      while (r < n/2) {
        for (int y = start_y; y<n-1-offset; y++) {
          matrix[start_x][y] = count++;
          start_y = y;
        }
        start_y +=1;
        for (int x = start_x; x<n-1-offset; x++) {
          matrix[x][start_y] = count++;
          start_x = x;
        }
        start_x += 1;
        for (int y = start_y; y>0+offset; y--) {
          matrix[start_x][y] = count++;
          start_y = y;
        }
        start_y -=1;
        for (int x = start_x; x>0+offset; x--) {
          matrix[x][start_y] = count++;
          start_x = x;
        }
        start_y += 1;
        offset += 1;
        r +=1;
      }
      if (n%2 !=0) {
      matrix[start_x][start_y] = count++;
      }
      return matrix;

    }
};

int main() {
  int n = 5;
  Solution solve;
  vector<vector<int>> matrix = solve.generateMatrix(n);
  for (auto a : matrix) {
    for (auto b : a) {
      cout<<b<<' ';
    }
    cout << endl;
  }
}