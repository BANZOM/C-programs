// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.
// Input: nums = [1,1,1,1,1]
// Output: [1,2,3,4,5]
// Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *ans = (int*)malloc(numsSize*sizeof(int));
    int sum=0;
    for(int i=0; i<numsSize; i++){
        sum += nums[i];
        ans[i]=sum;
    }
    *returnSize = numsSize;
    return ans;
}

// This is a function that return the output
