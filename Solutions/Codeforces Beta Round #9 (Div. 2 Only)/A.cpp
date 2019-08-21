// http://codeforces.com/contest/9/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    int a,b,t;
    cin>>a>>b;
    t=max(a,b);
    t=7-t;
    if(t==1){cout<<"1/6";}
    if(t==2){cout<<"1/3";}
    if(t==3){cout<<"1/2";}
    if(t==4){cout<<"2/3";}
    if(t==5){cout<<"5/6";}
    if(t==6){cout<<"1/1";}
    
}