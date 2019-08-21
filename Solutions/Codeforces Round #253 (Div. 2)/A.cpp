// http://codeforces.com/contest/443/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
using namespace std;
int main ()
{
    char s[1000];
    scanf("%[^\n]s",s);
    int n,count=0,a[26]={0};
    n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]>=97 && s[i]<=122){a[s[i]-97]++;}
    }
    for(int i=0;i<26;i++)
    {
      if(a[i]>0){count++;}
    }
    cout<<count;
}