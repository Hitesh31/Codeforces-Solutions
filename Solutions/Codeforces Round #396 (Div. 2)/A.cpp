// http://codeforces.com/contest/766/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main ()
{
  string s,c;
  cin>>s>>c;
  if(s==c){cout<<"-1";}
  else cout<<max(s.size(),c.size());
  
}
