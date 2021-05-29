#include<iostream>
using namespace std;
int main()
{
    int testcases,sum;
    long int number;
    sum=0;
    cin>>testcases;
    while(testcases>0)
    {
        cin>>number;
        while(number>0)
        {
            sum = sum + number % 10;
            number = number / 10;
        }
        cout<<sum<<"\n";
        sum=0;
        testcases--;
    }
return 0;
}