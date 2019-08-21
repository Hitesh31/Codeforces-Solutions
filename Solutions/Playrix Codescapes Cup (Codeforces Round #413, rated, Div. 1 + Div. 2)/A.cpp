// http://codeforces.com/contest/799/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
  int n,t,k,d;
  cin>>n>>t>>k>>d;
  int count;
  count=((n-1)/k)*t;
  if(d<count){cout<<"YES";}
  else cout<<"NO";
  
  
}