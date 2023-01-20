// Winner of an election GFG @devottam2809

//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        vector<string>ans;
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
            
        int max_vote=0;
        string s="";
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            int value=it->second;
            string check=it->first;
            
            if(value > max_vote)
            {
                max_vote = value;
                s=check;
            }    
            else if(value == max_vote){
                if(check < s)
                    s=check;
            }
        }
    ans.push_back(s);
    string p = to_string(max_vote);
    ans.push_back(p);
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends
