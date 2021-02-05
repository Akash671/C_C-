
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> reverse_arr(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = reverse_arr(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

vector<int> reverse_arr(int a[], int n) {
    // code here
    vector<int>ans;
    for(int i=0;i<n;++i)
    {
    	ans.push_back(a[n-i-1]);
    }
    return ans;
}
