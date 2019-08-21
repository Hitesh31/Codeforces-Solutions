// http://codeforces.com/contest/339/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
  string s;
  cin>>s;
  int a;
  a=s.size();
  sort(s.begin(),s.end());
  cout<<s[a/2];
  for(int i=a/2+1;i<a;i++)
  {
      cout<<"+"<<s[i];
  }
}