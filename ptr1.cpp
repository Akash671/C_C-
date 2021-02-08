/*   author akash kumar   */

#include<iostream>
using namespace std;

void solve(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		int b;
		cin>>a>>b;
		solve(&a,&b);
		cout<<a<<" "<<b<<endl;
		}
	return 0;
}
