// http://codeforces.com/contest/268/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    int n,count=0;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++){cin>>a[i][0]>>a[i][1];}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][0]==a[j][1]){count++;}
        }
    }
    cout<<count;
}