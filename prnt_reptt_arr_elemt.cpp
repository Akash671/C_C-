/*   author akash kumar  */


#include<iostream>
using namespace std;

void solve(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c>=2)
		{
			cout<<a[i]<<" ";
		}
	}
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
		solve(n,a);
	}
	return 0;
}
