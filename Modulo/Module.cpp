#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int answer = 1;
	int testcases;
	cin >> testcases;
	int number_array[testcases];
	int modulo = 1000000000+7;

	while(testcases--)
	{
		int number;
		cin >> number;
		answer = (answer*number)%modulo;
	}
	cout << answer <<endl;
}