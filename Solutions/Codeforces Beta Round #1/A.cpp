// http://codeforces.com/contest/1/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    double n,m,a;
    cin>>n>>m>>a;
    double p,q,ans;
    unsigned long long int s;
    p=ceil(n/a);
    q=ceil(m/a);
    ans=p*q;
    s=ans;
    cout<<s;
}