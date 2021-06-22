#include <bits/stdc++.h>
using namespace std;

int main()
{
string str,newString;
cin >> str;

for(int i =0; i<str.size();i++)
{
	if(str[i]=='G')
	{
		newString.push_back(str[i]);
	}
	else if(str[i]=='(')
	{
		if(str[i+1]==')')
		{
			newString.push_back('o');
		}
		if(str[i+1]=='a')
		{
			newString.push_back('a');
			newString.push_back('l');
		}
	}
}
cout <<newString;
}
