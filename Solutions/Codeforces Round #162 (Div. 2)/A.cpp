// http://codeforces.com/contest/265/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    string c,s;
    cin>>s>>c;
    int a,b,i=0,j=0,count=1;
    a=s.size();
    b=c.size();
    while(b-- && count<=a)
    {   if (c[i]!=s[j]){i++;}
        else if(c[i]==s[j]){j++;i++;count++;}
    }
    cout<<count;
}