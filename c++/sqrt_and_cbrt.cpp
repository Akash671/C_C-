#include<iostream>
#include<cmath>
using namespace std;

void solve(int a,int b)
{
	cout<<sqrt(a)<<" "<<cbrt(b);
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

		solve(a,b);
		cout<<endl;

	}
   return 0;
}

