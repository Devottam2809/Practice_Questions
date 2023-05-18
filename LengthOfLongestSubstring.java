class Solution {
    public int lengthOfLongestSubstring(String s) {
        int i=0;
        int j=0;
        int mx=0;
       HashMap<Character,Integer> map=new HashMap<>(); 
        for(j=0;j<s.length();j++){
            char curr=s.charAt(j);
            map.put(curr,map.getOrDefault(curr,0)+1);
            while(map.size()!= (j-i+1)){
                char leftchar=s.charAt(i);
                map.put(leftchar,map.get(leftchar)-1);
                if(map.get(leftchar)==0){
                    map.remove(leftchar);
                }
                i +=1;
            }
            mx=Math.max(mx,j-i+1);
        }
        return mx;
    }
}
