#include <bits/stdc++.h>
using namespace std;

int main()
{
	int testcases;
	cin >> testcases;

while(testcases--)
{
	string jewels, stones;
	cin >> jewels >> stones;
	int length=0;

	for(int i=0; i<stones.size();i++)
	{
		int res = jewels.find(stones[i]);
		if(res >= 0)
		{
			length += 1;
		}
	}
	cout << length << endl;
}
}