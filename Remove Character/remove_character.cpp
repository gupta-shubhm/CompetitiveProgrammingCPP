#include <bits/stdc++.h>
using namespace std;

int main()
{
string a, a_cut;
cin >> a >> a_cut;

for(int i =0; i < a_cut.size();i++)
  {
    a.erase(remove(a.begin(), a.end(), a_cut[i]), a.end());
  }
	cout << a;
}