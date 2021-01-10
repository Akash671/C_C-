#include<iostream>
using namespace std;

int solve(int n,int a[])
{
	int s=0;
	for(int i=0;i<n;++i)
	{
		s+=a[i];
	}
	return s;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		cout<<solve(n,a)<<endl;
	}
	return 0;
}
