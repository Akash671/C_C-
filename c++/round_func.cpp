/* author akash kumar  */
/* round function    */

#include<iostream>
#include<cmath>
using namespace std;

int solve(float a)
{
	return round(a);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float a;
		cin>>a;

		cout<<solve(a)<<endl;
	}
	return 0;
}

