/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1;
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

    return maxCount-1;
    }
};


/*

Given a binary array nums, you should delete one element from it.

Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

 

Example 1:

Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.
Example 2:

Input: nums = [0,1,1,1,0,1,1,0,1]
Output: 5
Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].
Example 3:

Input: nums = [1,1,1]
Output: 2
Explanation: You must delete one element.


*/
