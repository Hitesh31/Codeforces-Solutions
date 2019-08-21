// http://codeforces.com/contest/427/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n],count=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        if(sum<0){count++;sum=0;}
        
    }
    cout<<count;
}