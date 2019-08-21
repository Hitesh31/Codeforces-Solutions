// http://codeforces.com/contest/381/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 int p=0,q=0,y=n-1,x=0;
 for(int t=0;t<n;t++)
 {
   if(t%2==0) { if(a[x]>a[y]){p=p+a[x];x++;}
              else if(a[x]<=a[y]){p=p+a[y];y--;}}
   if(t%2==1) { if(a[x]>a[y]){q=q+a[x];x++;}
              else if(a[x]<=a[y]){q=q+a[y];y--;} }
 }
 cout<<p<<" "<<q;
}
