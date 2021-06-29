#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "Welcome To CPP World";
	str.insert(str.begin(),' ');
	string str_rev, temp_rev_string;

	for(int i = str.size()-1; i >=0;i--)
	{
		if(str[i]!= ' ')
		{
			temp_rev_string.push_back(str[i]);
		}

		else
		{
			reverse(temp_rev_string.begin(),temp_rev_string.end());
			str_rev.append(temp_rev_string+' ');
			temp_rev_string = "";
		}

	}
	cout << str_rev << endl;

}