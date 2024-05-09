/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> occurrenceCount; //keeping track of counts we've seen already

        for(int num : arr){
            occurrenceCount[num]++;
        }

        unordered_map<int, int> countOccurrence;

        for(const auto& pair : occurrenceCount){
            if(countOccurrence.find(pair.second) != countOccurrence.end()){
                return false;
            }
            countOccurrence[pair.second]=1;
        }

        return true;

    }
};


/*

Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true


*/
