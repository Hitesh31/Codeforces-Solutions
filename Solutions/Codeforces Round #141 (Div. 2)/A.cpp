// http://codeforces.com/contest/228/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    int a,b,c,d,arr[3]={0},count=0;
    cin>>a>>b>>c>>d;
    if(a==b) {arr[0]++;}
    if(a==c) {arr[0]++;}
    if(a==d) {arr[0]++;}
    if(b==c) {arr[1]++;}
    if(b==d) {arr[1]++;}
    if(c==d) {arr[2]++;}
    if(arr[0]>0){count++;}
    if(arr[1]>0){count++;}
    if(arr[2]>0){count++;}
    cout<<count;
}