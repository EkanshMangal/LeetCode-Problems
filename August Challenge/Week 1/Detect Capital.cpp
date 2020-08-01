Problem Name: Detect Capital
https://leetcode.com/explore/featured/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3409/

Solution:

class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        string str;
        str=word;
        string s=str;
       for (int i = 0; s[i]!='\0'; i++) {
          if(s[i] >= 'a' && s[i] <= 'z') {
             s[i] = s[i] - 32;
          }
       }
       if(str==s)
       {
           return true;
       }
       else
        {
           for (int i = 0; s[i]!='\0'; i++) {
              if(s[i] >= 'A' && s[i] <= 'Z') {
                 s[i] = s[i] + 32;
              }
           }   
           if(str==s)
           {
                return true;
           }
           else
           {
               s[0]=s[0]-32;
               if(str==s)
               {
                    return true;
               }
               else
               {
                     return false;
               }
           }
       }
        
    }
};


