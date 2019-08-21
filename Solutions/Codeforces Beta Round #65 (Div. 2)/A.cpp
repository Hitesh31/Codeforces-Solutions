// http://codeforces.com/contest/71/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
 int t;
 cin>>t;
 while(t--)
 {
     string s;
     cin>>s;
     unsigned long long int a;
     a=s.size();
     if(a<=10){cout<<s<<"\n";}
     else if (a>10){cout<<s[0]<<a-2<<s[a-1]<<"\n";}
 }
 
 
}
