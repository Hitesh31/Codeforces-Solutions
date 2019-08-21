// http://codeforces.com/contest/1203/problem/A

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		int a[n];
		int count=0;
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
				if(i && abs(a[i]-a[i-1]) > 1 )
				{
					if((a[i]==1 && a[i-1]==n) || (a[i-1]==1 && a[i]==n))
						continue;
					else
						count++;
				}
			}
			if(count==0 || n==1 || n==2 || n==3)
				cout<<"YES\n";
			else 
				cout<<"NO\n";
	}
	return 0;
}