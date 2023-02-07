// Check if N and its double exist      Leetcode 1346     @devottam2809
for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums.size();j++)
        {
            if(i!=j and (nums[i]==nums[j]*2))
                return true;
        }
    }
return false;
