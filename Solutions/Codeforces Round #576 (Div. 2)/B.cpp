// http://codeforces.com/contest/1199/problem/B

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace  std;
int main()
{
	long double h,l;
	cin>>h>>l;
	long double ans=(l*l-h*h)/(2*h);
	cout<<setprecision(20)<<ans;
}