// http://codeforces.com/contest/490/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n],b[3]={0};
    vector <pair<int,int>> vec;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        vec.push_back(make_pair(a[i],i+1));
        if(a[i]==1){b[0]++;}
        if(a[i]==2){b[1]++;}
        if(a[i]==3){b[2]++;}
    }
    sort(vec.begin(),vec.end());
    int m;
        m=min(b[0],b[1]);
        m=min(m,b[2]);
        
    if(m==0){cout<<m<<"\n";}
    else if(m>=1)
    {
        
       // sort(vec.begin(),vec.begin()+vec.size());
        cout<<m<<"\n";
        for(int j=m;j>0;j--)
        {   int p,q,r;
            p=vec[b[0]-j].second;
            q=vec[b[0]+b[1]-j].second;
            r=vec[b[0]+b[1]+b[2]-j].second;
            cout<<p<<" "<<q<<" "<<r<<"\n";
        } 
    }
}