// http://codeforces.com/contest/686/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
  long long int n,x;
  cin>>n>>x;
  long long int count=0,sum=0,temp;
  char c;
  sum=x;
  for(long int i=0;i<n;i++)
  {
      cin>>c>>temp;
      if(c=='+'){sum=sum+temp;}
      else if(c=='-'){sum=sum-temp; if(sum<0){sum=sum+temp;count++;}}
  }
  cout<<sum<<" "<<count;
  return 0;
}