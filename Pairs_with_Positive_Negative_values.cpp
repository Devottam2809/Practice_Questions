// Pairs with Positive Negative values GFG @devottam2809

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
    
    map<int,int>mp;
    
    vector<int>neg;
    
    vector<int>ans;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
            neg.push_back(a[i]);
        else
            mp[a[i]]++;
    }
    
    sort(neg.begin(),neg.end());
    
    for(int i=neg.size()-1;i>=0;i--)
    {
        int data=abs(neg[i]);
        if(mp[data]>0)
        {
            ans.push_back(neg[i]);
            ans.push_back(data);
            mp[data]-=1;
            
        }
    }
return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
