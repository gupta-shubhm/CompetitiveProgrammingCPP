#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b, a_rev,b_rev;
	cin >> a >> b;

	cout << a.size() << " " << b.size() << endl;
	cout << a+b << endl;
  a_rev = a;
	b_rev = b;
	a_rev[0]=b[0];
	b_rev[0]=a[0];
	cout << a_rev <<" "<< b_rev << endl;
}