#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(int argc, char const *argv[])
{
	string line;
	getline(cin,line);
	int alpha=0,num=0,space=0,other=0;
	for (char a:line)
	{
		if (isalpha(a))
		{
			alpha++;
		}
		else if (isdigit(a))
		{
			num++;
			/* code */
		}
		else if (isspace(a))
		{
			space++;
			/* code */
		}
		else
		{
			other++;
		}
		/* code */
	}

	cout<<alpha<<" "<<num<<" "<<space<<" "<<other;
	return 0;
}