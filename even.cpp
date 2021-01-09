#include<iostream>
using namespace std;

int main()
{
 int t;
 cin>>t;
  while(t--)
   {
      int n;
      cin>>n;
      for(int i=2;i<=n/2;i++)
       {
          if(n%i==0)
           {
             cout<<"even"<<endl;
              break;
            }
           else
           {
             cout<<"odd"<<endl;
              break;
           }
}
}
return 0;
}
