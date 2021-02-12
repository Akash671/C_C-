#include <iostream>
using namespace std;
 
// Function to implement KMP algorithm
void KMP(string X, string Y)
{
    int m = X.length();
    int n = Y.length();
    int c=0;
    // if Y is an empty string
    if (n == 0)
    {
    c++;
      //  cout << "Pattern occurs with shift 0";
       // return;
    }
   // cout<<c;
    // if X's length is less than that of Y's
    if (m < n)
    {
        cout << "Pattern not found";
        return;
    }
 
    // next[i] stores the index of next best partial match
    int next[n + 1];
 
    for (int i = 0; i < n + 1; i++)
        next[i] = 0;
 
    for (int i = 1; i < n; i++)
    {
        int j = next[i + 1];
 
        while (j > 0 && Y[j] != Y[i])
            j = next[j];
 
        if (j > 0 || Y[j] == Y[i])
            next[i + 1] = j + 1;
    }
 
    for (int i = 0, j = 0; i < m; i++)
    {
        if (X[i] == Y[j])
        {
            if (++j == n)
                c++;
              //  cout << "Pattern occurs with shift " << i - j + 1 << endl;
        }
        else if (j > 0) {
            j = next[j];
            i--;    // since i will be incremented in next iteration
        }
    }
    cout<<c;
}
 
// Program to implement KMP Algorithm in C++
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string text;
    string pattern;
    cin>>text>>pattern;
 
    KMP(text, pattern);
    cout<<endl;
    }
 
    return 0;
}
