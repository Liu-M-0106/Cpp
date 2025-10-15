// 洛谷P1047
// 第一行输入两个整数
// 第一个整数代表马路的长度l，每隔1m有一棵树
// 第二个数代表修建地铁的区域有m处
// 输入m行数据，每一行u和v两个整数代表一个区域的起始点和终止点坐标
// 输出剩余树木的数量
#include<bits/stdc++.h>
#define int long long
using namespace std;
int flag[999];
int ans;//ans为最终答案
signed main(){
	int l,m;
	cin>>l>>m;
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		for(int j=a;j<=b;j++)//标记
			flag[j]=1;
	}
	for(int i=0;i<=l;i++)
		if(!flag[i])//判断当前位置上的树是否没有被移走
			ans++;//增加最终答案
	cout<<ans;
	return 0;
}





// #include<iostream>
// using namespace std;
// int main()
// {
// 	int l,region;
// 	cin>>l>>region;
// 	int sum = l+1;
// 	for (int i = 0; i < region; ++i)
// 	{
// 		int u[region],v[region];
// 		cin>>u[i]>>v[i];
// 		sum = sum-(v[i]-u[i]);

// 		/* code */
// 	}



	


	
// 	return 0;
// }
