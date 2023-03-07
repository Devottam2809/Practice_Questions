// First Unique Character in a String   Leetcode 387      @devottam2809

class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character,Integer> map=new HashMap<>();
        for(int i=0;i<s.length();i++)
        {
            char x=s.charAt(i);
            if(map.containsKey(x))
            {
                Integer a=map.get(x);
                a=a+1;
                map.put(x,a);
            }
            else
            {
                map.put(x,1);
            }
        }

        for(int i=0;i<s.length();i++)
        {
            char x=s.charAt(i);
            if(map.get(x)==1)
                return i;
        }
        return -1;
    }
}
