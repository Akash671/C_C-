/*  author akash kumar  */
/*  ceil function return max round value  */
/*   eg. ceil(2.6)=3.0   */


#include<iostream>
#include<cmath>
using namespace std;

int solve(float a)
{
	return ceil(a);
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


