// Leetcode 2626 Array Reduce Transformation    @devottam2809

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let sum = init
    if(nums.length === 0) return sum
    for(let i = 0; i < nums.length; i++){
        sum = fn(sum, nums[i])
    }
    return sum
};
