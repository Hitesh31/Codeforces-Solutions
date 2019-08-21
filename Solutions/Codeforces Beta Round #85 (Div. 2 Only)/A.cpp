// http://codeforces.com/contest/112/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    string s,c;
    cin>>s;
    cin>>c;
    int a,b=0;
    a=s.size();
    
    for(int i=0;i<a;i++)
    {
        if(s[i]>90){s[i]=s[i]-32;}
        if(c[i]>90){c[i]=c[i]-32;}
        if(s[i]>c[i]){printf("1");break;}
        else if(s[i]<c[i]){printf("-1");break;}
        else if(s[i]==c[i]){b++;}
    }
    if(b==a){cout<<"0";}
}