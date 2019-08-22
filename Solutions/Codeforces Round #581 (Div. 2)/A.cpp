// http://codeforces.com/contest/1204/problem/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace  std;
int main()
{
	string s;
	cin>>s;
	if(s.size()&1)
	{
		int ones=0;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(ones==2)
				break;
			if(s[i]=='1')
				ones++;
		}
		if(ones==2)
			cout<<(s.size()/2)+1;
		else 
			cout<<s.size()/2;
	}
	else
		cout<<s.size()/2;
}