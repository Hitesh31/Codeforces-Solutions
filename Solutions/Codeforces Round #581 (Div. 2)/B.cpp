// http://codeforces.com/contest/1204/problem/B

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace  std;
int main()
{
	int n,l,r;
	cin>>n>>l>>r;
	long long int min,max;
	min=(n-l)+pow(2,l)-1;
	max=pow(2,r)-1+(n-r)*pow(2,r-1);
	cout<<min<<" "<<max;
}