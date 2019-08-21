// http://codeforces.com/contest/1196/problem/A

#include <iostream>
using namespace  std;
int main()
{
	int q;
	cin>>q;
	long long int a,b,c;
	while(q--)
	{
		cin>>a>>b>>c;
		cout<<(a+b+c)/2<<"\n";
	}
}