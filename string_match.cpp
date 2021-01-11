//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int solve(string S,string p)
{
   int n;
   int m;
   n=S.size();
   m=p.size();
   int c=0;
   for(int s=0;s<n-m+1;++s)
   {
   	int j=0;
   	while(j<m && S[s+j]==p[j])
   	{
   		j++;
   	}
   	if(j>=m)
   	{
   		c++;
   	}
   }
   return c;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string S;
		cin>>S;
		//getline(cin,S);
		string p;
		cin>>p;
		//getline(cin,p);
		cout<<solve(S,p)<<endl;
	}
	return 0;
}
