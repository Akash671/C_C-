/*   author akash kumar   */

#include<iostream>
using namespace std;

void solve(int a[],int n)
{
	int t;
	t=a[n-1];
	for(int i=0;i<n;i++)
	{
		a[n-i-1]=a[n-i-2];
	}
	a[0]=t;
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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		solve(a,n);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
