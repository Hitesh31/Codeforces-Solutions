// http://codeforces.com/contest/677/problem/A

#include<iostream>
using namespace std;
int main ()
{
    int n,h,ans,count=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h){count++;}
    }
    ans=n+count;
    cout<<ans;
}