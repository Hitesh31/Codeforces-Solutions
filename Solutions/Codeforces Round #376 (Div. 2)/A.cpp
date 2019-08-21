// http://codeforces.com/contest/731/problem/A

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
  string s;
  cin>>s;
  int n,sum=0;
  n=s.size();
  for(int i=0;i<n;i++)
  {
     if(i==0)
     {
      if(s[i]-97<13){sum=sum+(s[i]-97);}
      else if(s[i]-97>13){sum=sum+((26-(s[i]-97))%13);}
      else if(s[i]-97==13){sum=sum+13;}
     }
     else if(i>0)
     {if(abs(s[i]-s[i-1])<13){sum=sum+abs(s[i]-s[i-1]);}
      else if(abs(s[i]-s[i-1])>13){sum=sum+((26-abs(s[i]-s[i-1]))%13);}
      else if(abs(s[i]-s[i-1])==13){sum=sum+13;}
     }
  }
  cout<<sum;
}