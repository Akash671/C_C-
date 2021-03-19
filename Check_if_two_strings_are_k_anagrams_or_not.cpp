/*  author akash kumar  */

#include<iostream>
using namespace std;
const int MAX_CHAR=26;

int solve(string A,string B,int k)
{
	/* logic here  */
	int n=A.size();
	if(n !=B.length())
	{
		return false;
	}
	int count1[MAX_CHAR]={0};
	int count2[MAX_CHAR]{0};
	for(int i=0;i<n;++i)
	{
		count1[A[i]-'a']++;
	}
	for(int i=0;i<n;++i)
	{
		count2[B[i]-'a']++;
	}
	int count=0;
	for(int i=0;i<MAX_CHAR;++i)
	{
		if(count1[i]>count2[i])
		{
			count=count+abs(count1[i]-count2[i]);
		}
	}
	return (count<=k);

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string  A,B;
		cin>>A>>B;
		int k;
		cin>>k;
		cout<<solve(A,B,k)<<endl;
	}
	return 0;
}
