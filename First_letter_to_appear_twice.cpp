// First Letter to appear twice   Leetcode 2531     @devottam2809
class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>umap;
                char ans;
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]++;
            if(umap[s[i]]==2)
             {
                    ans=s[i];
                    break;
             }
        }
    return ans;
    }
};
