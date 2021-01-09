#include<iostream>
using namespace std;
//5 8 6 3 2
void sort_arr(int n, int a[]) 
{
  for(int i=1;i<n-1;++i)
   {
      for(int j=0;j<n;++j)
        {
           if(a[i]<a[j])
           {
             int temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
        }
    }
}
int solve(int n, int bg, int a[])
{
   int s=0;
   int c=0;
   //sort(a,a+n);
   sort_arr(n,a);
   for(int i=0;i<n;++i)
     {
        s+=a[i];
        if(s<=bg)
        {
           c+=1;
        }
        else
        {
           break;
        }
     }
   return c;
}
int main()
{
    int t;
    int T;
    cin>>T;
    for(t=1;t<=T;++t)
    {
     int n;
     int bg;
     cin>>n>>bg;
     int a[n] ;
     for(int i=0;i<n;++i)
     {
        cin>>a[i] ;
     }
    cout <<"Case #"<<t<<": "<<solve(n,bg,a)<<endl;
    } 
    return 0;
}