// http://codeforces.com/contest/567/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main ()
{
  int n;
  cin>>n;
  long long int a[n];
   int dmin1,dmin2,dmax1,dmax2;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<"\n";
  
  for(int i=1;i<n-1;i++)
  {
     
      dmin1=a[i+1]-a[i];
      dmin2=a[i]-a[i-1];
      dmax1=a[n-1]-a[i];
      dmax2=a[i]-a[0];
      dmin1=min(dmin1,dmin2);
      dmax1=max(dmax1,dmax2);
      cout<<dmin1<<" "<<dmax1<<"\n";
  }
  cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0];
  
}