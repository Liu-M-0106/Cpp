// 给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
// 由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。
// 注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。
// T367类似
#include<iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int left = 0,right = x,ans = -1;
        while(left<=right){
        	int mid = left + (right - left)/2;
            long long square = (long long)mid * mid; // 使用 long long 防止溢出
        	if ( square <= x)
        	{
        		left = mid +1;
        		ans = left-1;
        	}
        	else if(square > x){
        		right = mid-1;
        	}
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
	int x = 2147395599;
	Solution solve;
	int a = solve.mySqrt(x);
	std::cout << a << std::endl;
	return 0;
}