/*You are provided an integer . Your task is to determine the largest integer  () that is a coprime of . This implies that .

Input format

A single line that contains an integer

Output format

Print the answer to the question.

Constraints


SAMPLE INPUT
4
SAMPLE OUTPUT
1
Explanation
Largest integer less than 3 (n-1), coprime with 4 is 1 */

#include <iostream>
using namespace std;
int gcd(int i,int n)
{
    if(i==0)
        return i;
    if(n==0)
        return n;

    if(i==n)
        return i;

    if(i>n)
       return gcd(i-n, n);
    return gcd(i, n-i);

}
int main()
{
	int n;
	cin >> n;
	int ans=0;
	for(int i=n-2;i>=0;i--)
	{
	    int temp = gcd(i,n);
	   // cout<<temp<<endl;
	    if(temp==1)
	    {
	        ans = i;
	        break;
	    }
	}
	cout<<ans;
}
