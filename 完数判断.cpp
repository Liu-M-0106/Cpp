// 一个数恰好等于不包含其本身所有因子之和称为完数
// 输出n以内所有完数
// #include<iostream>
// #include<vector>
// #include<math.h>
// #include<algorithm>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int N;
// 	cin>>N;
// 	vector<int> vec;
// 	vec.reserve(N);
// 	for (int i = 4; i < N; ++i)
// 	{
// 		int num = i;
// 		for (int j = 2; j <= sqrt(i); ++j)
// 		{
// 			if (i % j == 0)
// 			{
// 				vec.push_back(j);
// 				if (j != i/j)
// 				{
// 					vec.push_back(i/j);
// 				}
// 			}
// 		}
// 		for(auto k:vec)
// 		{
// 			num -= k;
// 		}
// 		if (num == 1)
// 			{
// 				sort(vec.begin(),vec.end());
// 				cout<<i<<" "<<"its factors are"<<" "<<1<<" ";
// 				for(auto m:vec)
// 				{
// 					cout<<m<<" ";
// 				}
// 				cout<<endl;
// 			}
// 		vec.clear();
// 	}

// 	return 0;
// }

// 优化代码：
// 1.在判断为完数时才存储因子，节省内存
// 2.直接累加因子和进行判断，省去num-=k步骤
// 3.去除不必要的预分配与清空操作
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 2; i < N; ++i) {
        int sum = 1; // 1一定是因子
        vector<int> factors = {1};
        int sq = sqrt(i);
        for (int j = 2; j <= sq; ++j) {
            if (i % j == 0) {
                factors.push_back(j);
                if (j != i / j) {
                    factors.push_back(i / j);
                }
                sum += j;
                if (j != i / j) sum += i / j;
            }
        }
        if (sum == i) {
            sort(factors.begin(), factors.end());
            cout << i << " its factors are ";
            for (auto f : factors) cout << f << " ";
            cout << endl;
        }
    }
    return 0;
}