Problem Name: Longest Palindrome

https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3423/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>fre;
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            fre[s[i]]++;
        }
        int even=0,odd=0;
        unordered_map<char,int> :: iterator it;
        for(it=fre.begin();it!=fre.end();it++)
        {
            if(it->second % 2==0)
            {
                even=even+it->second;
            }
            else
            {
                odd = odd+ it->second -1;
                flag=1;
            }
        }
            if (flag==0)
                return even;
            else
                return even+odd+1;
    }
};