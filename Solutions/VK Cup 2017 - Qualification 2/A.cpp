// http://codeforces.com/contest/770/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main ()
{
    int n,k;
    cin>>n>>k;
    char c[k],str[n];
    for(int i=0;i<k;i++){c[i]=97+i;}
    for(int i=0;i<n;i++)
    {
        str[i]=c[i%k];
        cout<<str[i];
    }
}