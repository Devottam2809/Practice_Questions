// Leetcode 881 boats to save people    @devottam2809

class Solution {
    public int numRescueBoats(int[] people, int limit) {
    Arrays.sort(people);
    int l=0,count=0;
    int len=people.length-1;
    while(l<=len)
    {
        if(people[l]+people[len] <= limit)
        {
            l++;
            len--;
        }
        else
            len--;
    count++;
    }
return count;
    }
}
