// http://codeforces.com/contest/263/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    int arr[5][5],a=0,b=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1){a=i;b=j;}
        }
    }
    a=abs(a-2);
    b=abs(b-2);
    cout<<a+b;
    
}