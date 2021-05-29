#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcases;
  long int number;
	int sum = 0;

	cin >> testcases;
	int numberArr[testcases];
	
	for(int i =0; i <testcases;i++)
	{
    cin >> number;
		numberArr[i]=number;
	}

	int number_of_digits = to_string(number).length();
	
	for (int j = 0;j<testcases;j++)
	{
		while(numberArr[j]!=0)
		{
			sum = sum + numberArr[j] % 10;
			numberArr[j] = numberArr[j]/10;
		}
		cout << sum<<"\n";
		sum = 0;
	}

	return 0;
}