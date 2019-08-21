// http://codeforces.com/contest/768/problem/A

#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main ()
{

	int n,count=0;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
	  if(a[i]>a[0] && a[i]<a[n-1]) 
	  count++;
	}
	cout<<count;
}