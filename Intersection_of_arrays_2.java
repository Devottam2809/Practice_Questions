// Intersection of arrays 2   Leetcode    @devottam2809

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        List<Integer> ans = new ArrayList<>();
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int i=0;
        int j=0;
        int n1=nums1.length;
        int n2=nums2.length;
        while(i<n1 && j<n2)
        {
            if(nums1[i]==nums2[j])
            {
                ans.add(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
        }
	int[] g = new int[ans.size()];
	for (int c = 0; c < ans.size(); c++) {
		g[c] = ans.get(c);
	}
	return g;
    }
}
