// http://codeforces.com/contest/962/problem/A

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    long int sum=0,p[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        p[i+1]=sum;
    }
    for(int i=1;i<n+1;i++)
    {
        if(2*p[i]>=sum)
        {cout<<i; break;}
    }
}