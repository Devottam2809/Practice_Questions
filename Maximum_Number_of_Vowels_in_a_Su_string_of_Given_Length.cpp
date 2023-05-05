// Leetcode 1456    Maximum Number of Vowels in a Substring of Given Length   @devottam2809
class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int j=0;
        int size=s.size();
        int counter = 0;
        int mx=INT_MIN;

        while(j<size){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' ||s[j]=='o' ||s[j]=='u')
                counter++;
            if(j-i+1<k)
                j++;
            else if(j-i+1==k){
                mx=max(mx,counter);
                counter--;
                j++;
                i++;
            }
        }
    return mx;
    }
};
