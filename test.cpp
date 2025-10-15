#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	vector<int> vec(num);
	iota(vec.begin(),vec.end(),1);
	for (auto a:vec)
	{
		cout<<a<<" ";
	}
	return 0;
}