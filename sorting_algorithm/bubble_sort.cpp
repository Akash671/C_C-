// author akash kumar
#include<iostream>
using namespace std;

void swap(int* a,int* b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

void bubble_sort(int n,int a[])
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
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
		bubble_sort(n,a);
		cout<<endl;
	}
	return 0;
}
