// reverse Vowels of a string     leetcode 345    @devottam2809

class Solution {
public:
bool isvowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='U'||c=='O')
        return true;
return false;
}
string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(isvowel(s[i]) and isvowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isvowel(s[i]))
                j--;
            else 
                i++;
        }
    return s;
    }
};
