/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> res;
        for(int i=0; i<accounts.size(); i++){
            int re=0;
            for(int j=0; j<accounts[i].size(); j++){
                re+=accounts[i][j];
            }
            res.push_back(re);
        }
        int max=0;
        for(int i=0; i<res.size(); i++){
            if(res[i]>max) max=res[i];
        }
        return max;
    }
};



/*

You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

 

Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6


*/
