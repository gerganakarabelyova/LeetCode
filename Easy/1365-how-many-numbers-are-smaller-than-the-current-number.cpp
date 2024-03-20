/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3{};
        int l1=word1.length();
        int l2=word2.length();
        if(l1==l2){
            for(int i=0; i<l1; i++){
                word3+=word1[i];
                word3+=word2[i];
            }
        }
        if(l1>l2){
            for(int i=0; i<l2; i++){
                word3+=word1[i];
                word3+=word2[i];
            }
            for(int i=l2; i<l1; i++){
                word3+=word1[i];
            }
        }
        if(l1<l2){
            for(int i=0; i<l1; i++){
                word3+=word1[i];
                word3+=word2[i];
            }
            for(int i=l1; i<l2; i++){
                word3+=word2[i];
            }
        }
        return word3;
    }
};



/*

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
 

Constraints:

1 <= word1.length, word2.length <= 100
word1 and word2 consist of lowercase English letters.


*/
