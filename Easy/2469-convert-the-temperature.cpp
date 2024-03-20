/*  This code was written by Gergana Karabelyova as an exercise
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        ans.push_back(celsius+273.15);
        ans.push_back(celsius*1.80+32.00);
        return ans;
    }
};


/*

You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.

You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].

Return the array ans. Answers within 10-5 of the actual answer will be accepted.

Note that:

Kelvin = Celsius + 273.15
Fahrenheit = Celsius * 1.80 + 32.00


*/
