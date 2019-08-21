// http://codeforces.com/contest/1203/problem/C

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	long int n;
	long long int a;
	cin>>n;
	cin>>a;
	long long int gcd=a;
	for(int i=0;i<n-1;i++)
	{
		cin>>a;
		gcd=__gcd(a,gcd);
	}
	int ans=0;
	long long int j=1;
	for(j=1;j<sqrt(gcd);j++)
	{
		if(gcd%j==0)
			ans+=2;
	}
	if(j*j==gcd)
		ans++;
	cout<<ans;
}
