#include<iostream>
using namespace std;

void insertion_sort(int n,int a[])
{
    for(int j=1;j<n;j++)
    {
    	int key=a[j];
    	int i=j-1;
    	while(i>=0 && a[i]>key)
    	{
    		a[i+1]=a[i];
    		i=i-1;
    	}
    	a[i+1]=key;
    }
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		insertion_sort(n,a);
		cout<<endl;
	}
	return 0;
}
