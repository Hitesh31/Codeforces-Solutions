// http://codeforces.com/contest/1203/problem/B

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int q,n;
	cin>>q;
	while(q--)
	{
		cin>>n;
		int a[4*n];
		for(int i=0;i<4*n;i++)
			cin>>a[i];
		sort(a,a+4*n);
		int count=0;
		int area = a[0]*a[4*n-1];
		for(int i=0;i<4*n;i=i+2)
			if(a[i]*a[4*n-1-i] != area || a[i]!=a[i+1])
				count++;
		if(count > 0)
			cout<<"NO\n";
		else 
			cout<<"YES\n";
	}
}