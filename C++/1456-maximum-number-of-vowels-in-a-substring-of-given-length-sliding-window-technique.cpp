/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    int maxVowels(string s, int k) {
        vector<char> a;
        int maxi=0;
        int answer=0;
        for(int i=0; i<s.length(); i++){
            a.push_back(s[i]);
        }
        for(int i=0; i<k; i++){
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
                ++maxi;
            }
        }
        answer=maxi;
        for(int i=0; i<a.size()-k; i++){
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
                --maxi;
            }
            if(a[i+k]=='a' || a[i+k]=='e' || a[i+k]=='i' || a[i+k]=='o' || a[i+k]=='u'){
                ++maxi;
            }
            answer=max(maxi,answer);
        }
        return answer;
    }
};
  

/*

Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Example 2:

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.
Example 3:

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.

*/
