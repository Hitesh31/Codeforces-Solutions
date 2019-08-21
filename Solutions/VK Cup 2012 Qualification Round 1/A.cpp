// http://codeforces.com/contest/158/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
 int n,k;
 cin>>n>>k;
 long int a[n+1],count=0;
 for(int i=1;i<=n;i++)
 {cin>>a[i];}
 if(a[k]>0)
 {
 count=k;
 for(int i=k;i<=n;i++)
 { if(a[i]==a[i+1]){count++;} else break;}
 cout<<count;
 }
 else if(a[k]==0){for(int i=k;i>=1;i--){if(a[i]>0){count++; }} cout<<count;}
 
 else cout<<count;
 
}
