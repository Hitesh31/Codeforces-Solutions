// http://codeforces.com/contest/732/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int c;
    c=a;
    for(int i=1;i<10;i++)
    {  a=c;
        a=a*i;
        if(a%10==0){cout<<i;break;}
        else if(a%10==b){cout<<i; break;}
    }
}