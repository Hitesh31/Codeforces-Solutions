// http://codeforces.com/contest/282/problem/A

#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main ()
{

	int n,x=0;
	cin>>n;
	string s;

	for (int i = 0; i < n; i++)
	{
	  cin>>s;
	  if(s[0]=='+' || s[1]=='+'){x++;}
	  else x--;
	}
	cout<<x;
	
}