// http://codeforces.com/contest/1201/problem/B

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace  std;
int main()
{
	int n;
	cin>>n;
	long long int max=0,sum=0,a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
		if(max<a)
			max=a;
	}
	if((sum&1) || sum<2*max)
		cout<<"NO\n";
	else
		cout<<"YES\n";
}