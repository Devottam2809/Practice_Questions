class Solution {
    public int totalFruit(int[] nums) {
        int i = 0;
        int j = 0;
        int maxLength = 0;
        HashMap<Integer , Integer> hashmap = new HashMap<>();
        
        for (j = 0; j < nums.length; j++) {
            int currfruit = nums[j];
            hashmap.put(currfruit, hashmap.getOrDefault(currfruit, 0) + 1);
            
            while (hashmap.size() > 2) {
                int leftfruit = fruits[i];
                hashmap.put(leftfruit, hashmap.get(leftfruit) - 1);
                if (hashmap.get(leftfruit) == 0) {
                    hashmap.remove(leftfruit);
                }
                i++;
            }
            
            maxLength = Math.max(maxLength, j - i + 1);
        }
    
        return maxLength;
    }
}
