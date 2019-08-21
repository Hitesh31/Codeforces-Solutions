// http://codeforces.com/contest/69/problem/A

#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main ()
{

	int n;
	cin>>n;
	int a[n][3],x=0,y=0,z=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0];
		cin>>a[i][1];
		cin>>a[i][2];
		x=x+a[i][0];
		y=y+a[i][1];
		z=z+a[i][2];
	}
	if(x==0 && y==0 && z==0){cout<<"YES";}
	else cout<<"NO";

	
}