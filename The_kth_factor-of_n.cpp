// Leetcode 1492 the kth factor of n

class Solution {
public:
    int kthFactor(int n, int k) {
        int i=1;
        int j=0;
        unordered_map<int,int>mp;
        vector<int>v1;
        vector<int>v2;
        while(i<=sqrt(n)){
            if(n%i==0){
                if(mp.find(i)==mp.end()){
                    v1.push_back(i);
                    mp[i]++;
                }
                if(mp.find(n/i)==mp.end()){
                    v2.push_back(n/i);
                    mp[n/i]++;
                }
            }
            i++;
        }
        reverse(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        if((v1.size()+v2.size())<k) return -1;
        if(k>v1.size()){
            return v2[k-v1.size()-1];
        }
        else return v1[k-1];
    }
};
