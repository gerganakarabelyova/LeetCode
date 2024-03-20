/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1{0};
        int num2{0};
        for(int i=1; i<=n; i++){
            if(i%m!=0) num1+=i;
            if(i%m==0) num2+=i;
        }
        return num1-num2;
    }
};



/*

You are given positive integers n and m.

Define two integers, num1 and num2, as follows:

num1: The sum of all integers in the range [1, n] that are not divisible by m.
num2: The sum of all integers in the range [1, n] that are divisible by m.
Return the integer num1 - num2.


*/
