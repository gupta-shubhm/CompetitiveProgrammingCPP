Problem
You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo .

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo .

Constraints:


Sample Input
5
1 2 3 4 5
Sample Output
120
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
There are 5 integers to multiply. Let's store the final answer in  variable. Since 1 is identity value for multiplication, initialize  as 1.

So the process goes as follows:

answer = 1
answer = (answer*1)%(10^9+7)
answer = (answer*2)%(10^9+7)
answer = (answer*3)%(10^9+7)
answer = (answer*4)%(10^9+7)
answer = (answer*5)%(10^9+7)

answer = 120

