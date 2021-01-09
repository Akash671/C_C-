#include<iostream>
using namespace std;

int solve(int n, int a[], int s)
{
  for(int i=1;i<n;i++)
    {
       if(a[i]==s)
         {
           return 1;
        }
    }
    return 0 ;
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
        cout<<solve(n,a,s)<<endl;
    }
    //cout<<
    return 0;
}