/*  akash kumar  */
#include<bits/stdc++.h>
//#include<iostream>
//#include<string>
using namespace std;

int solve(string a,string B)
{
	int m;
	if((m=a.length()) !=B.length())
	{
		return false;
	}
	for(int i=0;i<m;++i)
	{
		rotate(a.begin(),a.begin()+1,a.end());
		if(!a.compare(B))
		{
			return true;
		}
	}
	return false;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string A;
		string B;
		cin>>A>>B;
		cout<<solve(A,B);
		cout<<endl;
	}
	return 0;
}

