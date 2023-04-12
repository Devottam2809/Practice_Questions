// Leetcode  2634  Filter Elements from Array     @devottam2809
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let ans=[]
    for(let i=0;i<arr.length;i++){
        if(fn(arr[i],i))
        {
            ans.push(arr[i]);
        }
    }
return ans;
};
