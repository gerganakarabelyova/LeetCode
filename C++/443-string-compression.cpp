/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double answer;
        double sum=0;
        for(int i=0; i<k; i++) {
            sum+=nums[i];
        }
        answer=sum;
        for(int i=0; i<nums.size()-k; i++){
            sum-=nums[i];
            sum+=nums[i+k];
            answer=max(sum,answer);
        }
        return answer/k;
    }
};
    
    
/*    
    double findMaxAverage(vector<int>& nums, int k) {
        int l = nums.size();
        int l2= l-k;
        double max=0;
        for(int i=0; i<=l2; i++){
            double sum=0;
            double avg;
            for(int j=i; j<k+i; j++){
                sum+=nums[j];
            }
            avg=sum/static_cast<double>(k);
            if(i==0) {
                max=avg;
            }
            else {
                if(max<avg) max=avg;
            }
        }
        return max;
    }
};

*/



/*

You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

Input: nums = [5], k = 1
Output: 5.00000


*/
