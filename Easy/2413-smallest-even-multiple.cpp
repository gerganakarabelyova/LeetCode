/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) {
            return n;
        } else {
            return 2 * n;
        }
    }
};


/*

Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
 

Example 1:

Input: n = 5
Output: 10


*/
