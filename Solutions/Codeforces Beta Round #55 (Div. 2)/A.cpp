// http://codeforces.com/contest/59/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int n,a=0,A=0;
    n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]<=90){A++;}
        if(s[i]>=97){a++;}
    }
    for(int i=0;i<n;i++)
    {
        if(a>=A){if(s[i]<=90){s[i]=s[i]+32;}}
        else if(A>a){
            if(s[i]>=97){s[i]=s[i]-32;}
        }
        cout<<s[i];
    }
    
    
    
}