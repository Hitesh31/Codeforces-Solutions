// http://codeforces.com/contest/1196/problem/B

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace  std;
int main()
{
	int q,n,k;
	cin>>q;
	while(q--)
	{
		cin>>n>>k;
		long long int a[n];
		vector <int> myvec;
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]&1)
			{
				myvec.push_back(i+1);
				count++;
			}
		}
		bool flag=0;
		if((count-k+1)&1 && count >= k)
		{
			cout<<"YES\n";
			for(int i=0;i<k-1;i++)
				cout<<myvec[i]<<" ";
			cout<<n<<endl;
		}
		else
			cout<<"NO\n";
	}
}