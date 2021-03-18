/* author akash kumar */
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*
p= g k s r e k
   0 1 2 3 4 5
S= g e e k s f o r g e e   k s
   0 1 2 3 4 5 6 7 8 9 10 11 12
   
  s=7
  j=6
s+j=13
*/
int solve(string A,string B)
{
   int n;
   int m;
   n=B.size();
   m=A.size();
   //cout<<n<<" "<<m<<endl;
   ////int c=0;
   int j=0;
   for(int i=0;i<n;i++)
   {
   //   int j=0;
    if(A[j]==B[i])
    {
        j++;
       //cout<<j<<endl;
    }
    if(j==m)
    {
        //c++;
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
        string A;
        string B;
        cin>>A;
        cin>>B;
        cout<<solve(A,B)<<endl;
    }
    return 0;
}
