// http://codeforces.com/contest/431/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    int a[5],sum=0;
    cin>>a[1]>>a[2]>>a[3]>>a[4];
    string s;
    cin>>s;
    int n;
    n=s.size();
    for(int i=0;i<n;i++)
    {
        sum=sum+a[s[i]-48];
    }
    cout<<sum;
}