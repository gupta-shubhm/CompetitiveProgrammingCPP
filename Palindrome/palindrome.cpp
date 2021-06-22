#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, a_rev;
	cin >> a;

	for(int i = a.size()-1;i>=0;i--)
	{
		// a_rev = a_rev+a[i]; //This method is more time complex than the below one
		a_rev.push_back(a[i]);
	}

	if(a == a_rev)
	{
		cout << "YES"<<endl;
	}
	else
	{
		cout << "NO"<<endl;
	}
}