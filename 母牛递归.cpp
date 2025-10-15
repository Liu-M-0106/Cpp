// 有一头母牛，它每年年初生一头小母牛。
// 每头小母牛从第四个年头开始，每年年初也生一头小母牛。
// 请编程实现在第n年的时候，共有多少头母牛？

#include<iostream>
using namespace std;

int main() {
    int year;
    while (cin >> year && year != 0) {
        if (year <= 4) {
            cout << year << endl;
        } else {
            int dp[55] = {0};
            dp[1] = 1;
            dp[2] = 2;
            dp[3] = 3;
            dp[4] = 4;
            for (int i = 5; i <= year; ++i) {
                dp[i] = dp[i-1] + dp[i-3];
            }
            cout << dp[year] << endl;
        }
    }
    return 0;
}
// int main()
// {
//     int year;
//     for(int i = 1; i>0;i++)
//     {
//         cin>>year;
//         if(year == 0)
//         {
//             break;
//         }
//         else
//         {
//             if(year <=4)
//             {
//                 cout<<year<<endl;
//             }
//             else
//             {
//                 int j = year/4;
//                 cout << (j+1)*year -4 * j*(j+1)/2<<endl;
//             }
//         }
//     }
    
//     return 0;
// }