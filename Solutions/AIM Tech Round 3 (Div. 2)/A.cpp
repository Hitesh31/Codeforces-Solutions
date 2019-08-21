// http://codeforces.com/contest/709/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    long long int n,b,d;
    cin>>n>>b>>d;
    long long int a[n],count=0,sum=0;
    for(long int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]<=b){sum=sum+a[i];}
      if(sum>d){count++;sum=0;}
    }
    cout<<count;
}