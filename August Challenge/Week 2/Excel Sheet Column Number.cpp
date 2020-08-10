Problem Name:   Excel Sheet Column Number

https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3419/

class Solution {
public:
    int titleToNumber(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            sum=sum+ number(s[i])*(pow(26,s.length() -i-1));
        }
        return sum;
        
    }
    int number(char c)
    {
        return (int(c) - 64);
    }
};