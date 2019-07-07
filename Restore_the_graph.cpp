/*
Restore the Graph

A weighted connected graph of N nodes and M edges is given initially, Misty ntes the Distance Matrix of the
graph. The Distance Matrix D of the Graph is a N*N matrix where the entry D[i][j] represents the shortest
distance between cities i and j. Misty,being careless loses the graph thst she had.But she still has the Distance
Matrix with her. Although, she might have made some mistake in noting down the Distance Matrix. Can you determine
if the Distance Matrix represents a valid graph or not.It is known that the graph had positive edge weights not
exceeding 10^6.

INPUT :
The first line contains T denoting the number of test cases
The first line of each test case contains a single integer N denoting the number of cities
This is followed by a N*N Distance Matrix D.

OUTPUT :
For each test case,output "YES"(without quotes) if the Distance Matrix D represents a valid graph
else output "NO" in a new line.

Sample Input :
2
2
0 5
5 0
2
1 5
5 1

Sample Output :
YES
NO

*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t!=0)
    {
        cin>>n;
        int a[n][n];
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][i]!=0 || a[i][j]!=a[j][i])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<"YES";
        else
            cout<<"NO";
     t--;
    }
    return 0;
}
