// Leetcode 2635  Apply Transform Over Each Element in Array  @devottam2809

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let ans=[]
    for(var i=0;i<arr.length;i++)
        ans.push(fn(arr[i],i))
return ans;
};
