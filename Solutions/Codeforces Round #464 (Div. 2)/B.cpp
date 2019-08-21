// http://codeforces.com/contest/939/problem/B

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main ()
{
 unsigned long long int n;
 int k,type=1;
 cin>>n>>k;
 unsigned long long int a[k],min=0,box=0;
 cin>>a[0];
 min=a[0];
 box=n/min;
 for(int i=1;i<k;i++)
 {
   cin>>a[i];
   if((n%min)>(n%a[i])) {min=a[i];box=n/min;type=i+1;}
 }
 cout<<type<<" "<<box;
}
