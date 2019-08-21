// http://codeforces.com/contest/294/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n+2];
    for(int i=1;i<=n;i++){cin>>a[i];}
    int m;
    cin>>m;
    int x[m+1],y[m+1];
    for(int i=1;i<=m;i++){cin>>x[i]>>y[i];}
    for(int i=1;i<=m;i++)
    {
      
      a[x[i]-1]=a[x[i]-1] + y[i]-1;
      a[x[i]+1]=a[x[i]+1] + a[x[i]]-y[i];
      a[x[i]]=0;
     }
     for(int i=1;i<=n;i++){cout<<a[i]<<"\n";}
}