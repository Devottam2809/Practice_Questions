// Final Value of Variable After Performing Operations    Leetcode  2011 

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int x=0;
       for(string &s:operations)
       {
           if(s[1]=='-')   --x;
            else    ++x;
       } 
    return x;
    }
};
