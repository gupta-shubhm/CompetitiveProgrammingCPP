#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "Welcome To CPP World";
	string str_rev;


	// Method 1 - Use For Loop
	for(int i = str.size()-1; i >=0;i--)
	{
		str_rev.push_back(str[i]);
	}
	cout << str_rev << endl;

	// Method 2 - Use reverse inbuilt function
	reverse(str.begin(),str.end());
	cout << str << endl;

}