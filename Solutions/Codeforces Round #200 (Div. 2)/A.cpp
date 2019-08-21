// http://codeforces.com/contest/344/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 int a[n]={0},count=0;
 for(int i=1;i<=n;i++)
 { cin>>a[i];
     if(a[i]!=a[i-1]){count++;}
 }
 cout<<count;
}