/* author akash kumar */

#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int s,int n)
{
    for(int i=0;i<n/2+1;++i)
    {
	if(a[n/2]==s)
	{
	    return 1;
	}
	
	if(a[n/2-i-1]==s)
	{
	    return 1;
	}
	if(a[n/2+i+1]==s)
	{
	    return 1;
	}
    }
    return 0;
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
	int s;
	cin>>s;
	cout<<solve(a,s,n)<<endl;
    }
    return 0;
}
