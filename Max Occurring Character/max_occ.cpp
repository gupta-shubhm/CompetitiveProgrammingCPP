#include <bits/stdc++.h>
using namespace std;

int main()
{

string str = "Welcome To CPP World";
int num_arr[str.length()];
char char_arr[str.length()];
int cnt = 0;


for(int i = 0; i<str.length();i++)
{
	for(int j = 0; j<str.length();j++)
	{
		if(str[j]==str[i])
		{
			cnt++;
		}
	}

	if(str[i]!=' ')
	{
	num_arr[i]=cnt;
	char_arr[i]=str[i];
	}
	cnt = 0;
}

int maxElement = max_element(num_arr, num_arr + str.length()) - num_arr;

cout<< "Max Occurrence is of Alphabet = "<<char_arr[maxElement]<<endl;

}