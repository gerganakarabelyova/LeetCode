/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        for(char a: s){
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
                vowels.push_back(a);
            }
        }
        reverse(vowels.begin(), vowels.end());
        int i=0;
        for(int j=0; j<s.length(); j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U'){
                s[j]=vowels[i];
                i++;
            }
        }
        return s;
    }
};



/*

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"


*/
