// Leetcode 2586 Count the Number of Vowel Strings in Range   @devottam2809

class Solution {
private boolean check(String s)
{
    char i=s.charAt(0);
    char j=s.charAt(s.length()-1);
    String vowel="aeiou";
    if(vowel.indexOf(i)!=-1 && vowel.indexOf(j)!=-1)
        return true;
return false;
}
    public int vowelStrings(String[] words, int left, int right) {
        int counter=0;
        for(int i=left;i<=right;i++)
        {
            if(check(words[i]))
                counter++;
        }
    return counter;
    }
}
