/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxCount=0;
        int count=0;
        int zeroCount=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                ++count;
            }
            else { // nums[i] == 0
                if (zeroCount < k) {
                    ++count;
                    ++zeroCount;
                } else { // Exceeded allowed flips
                    while (nums[i - count] != 0) {
                        --count;
                    }
                }
            }
            maxCount = max(maxCount, count);
        }

    return maxCount;
    }
};


/*

Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.


*/
