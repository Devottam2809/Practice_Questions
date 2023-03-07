// kth Missing positive     Leetcodee 1539    @devottam2809

class Solution {
    public int findKthPositive(int[] arr, int k) {
        int[] nums=new int[20001];
        for(int i=0;i<arr.length;i++)
            nums[arr[i]]++;

        int counter=0;
        for(int i=1;i<=2000;i++)
        {
            if(nums[i]==0)
                counter++;
            
            if(counter==k)
                return i;
        }
    return -1;
    }
}
