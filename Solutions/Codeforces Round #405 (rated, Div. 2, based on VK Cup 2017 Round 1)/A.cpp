// http://codeforces.com/contest/791/problem/A

#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    while(b>=a)
    {count++;a=a*3; b=b*2;}
    cout<<count;
}