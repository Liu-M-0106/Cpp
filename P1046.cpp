// 洛谷P1046
// 第一行输入10个 100-200之间的整数（含）表示苹果到地面的高度
// 第二行输入一个100-120之间的整数（含）表示能够到的高度
// 有一个30cm的椅子
// 输出能够到的苹果数目

// 参考题解：直接利用逻辑语句来进行判定，S += !(判断条件)
#include<iostream>
using namespace std;

int main(){
	int height[10];
	int Catch=0;
	int Count=0;
	cout << "请输入苹果到地面之间的高度:" << endl;
	for(int i = 0; i<=9;++i)
	{
		int j = 0;
		cin>>j;
		if(100<= j && j <= 200)
		{
			height[i] = j;
		}
		else{
			cout<<"请输入100~200之间的整数"<<endl;
			--i;
		}
	}
	cout<<"能够到的高度是："<<endl;
	cin>>Catch;
	if(Catch>=100 && Catch<=200)
	{
		for(int i = 0; i<= 9; ++i)
		{
			Count += !(height[i] <= Catch + 30);
			// if(Catch+30 >= height[i])
			// {
			// 	Count++;
			// }
		}
		cout<<"能摘到的苹果数为："<<Count<<endl;
	}
	else{
		cout<<"请输入100~120之间的整数"<<endl;
	}
	return 0;
}