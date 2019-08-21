// http://codeforces.com/contest/231/problem/A

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n][3],sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
      { cin>>a[i][j]; sum=sum+a[i][j];}
       if(sum>=2){count++;}
       sum=0;
    }
    cout<<count;
}