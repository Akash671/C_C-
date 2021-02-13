#include<iostream>
using namespace std;

void swap(int* a,int* b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

void selection_sort(int n,int a[])
{
	for(int i=0;i<n-1;++i)
	{
		int small=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[small])
			{
				small=j;
			}
		}
		swap(&a[i],&a[small]);
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
		selection_sort(n,a);
		cout<<endl;
	}
	return 0;
}
