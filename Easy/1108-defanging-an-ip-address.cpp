/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    string defangIPaddr(string address) {
    int l = address.length();
    int additionalLength = 0;
    for (int i = 0; i < l; i++) {
        if (address[i] == '.') {
            additionalLength += 2;
        }
    }
    address.resize(l + additionalLength);
    int j = l + additionalLength - 1;
    for (int i = l - 1; i >= 0; i--) {
        if (address[i] == '.') {
            address[j--] = ']';
            address[j--] = '.';
            address[j--] = '[';
        } else {
            address[j--] = address[i];
        }
    }
    return address;
    }
};


/*

Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"


*/
