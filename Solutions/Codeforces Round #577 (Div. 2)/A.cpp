// http://codeforces.com/contest/1201/problem/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace  std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m];
	int arr[26][m];
	string s;
	for(int i=0;i<26;i++)
		for(int j=0;j<m;j++)
			arr[i][j]=0;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		for(int j=0;j<m;j++)
		{
			arr[s[j]-65][j]++;
		//	cout<<arr[s[j]-65][j];
		}
		//cout<<endl;
	}
	int max;
	long long int ans=0;
	for(int i=0;i<m;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
	{
		max=0;
		for(int j=0;j<26;j++)
		{
			if(max<arr[j][i])
				max=arr[j][i];
		}
		ans+=max*a[i];
	}
	cout<<ans<<endl;
}