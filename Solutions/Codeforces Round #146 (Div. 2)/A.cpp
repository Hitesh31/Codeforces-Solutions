// http://codeforces.com/contest/236/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int n,count=0;
    int a[26]={0};
    n=s.size();
    for(int i=0;i<n;i++)
    {
     a[s[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {if(a[i]>0){count++;}}
    if(count%2==0){cout<<"CHAT WITH HER!";}
    else cout<<"IGNORE HIM!";
}