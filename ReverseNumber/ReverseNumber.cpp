#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
       int number;
       cin>>number;
			 string reverseNumber="";
       
       while(number>0)
       {
           int lastDigit = number%10;
					 reverseNumber = reverseNumber+to_string(lastDigit);
           number = number/10;
       }
       
			 /*Here you can use any method to convert from string to int - For online competitive platforms but in local ide/terminal this will run fine without conversion too
			 
			 You can use any method to convert String -> Int
			 */

       cout << stoi(reverseNumber) << endl;
  
    }

	return 0;
}