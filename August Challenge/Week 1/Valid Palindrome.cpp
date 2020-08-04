Problem Name: Valid Palindrome
https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3411/

class Solution {
public:
    bool isPalindrome(string s) 
    {
        string str="";
        char a;
       for (int i = 0; s[i]!='\0'; i++) {
          if(s[i] >= 'a' && s[i] <= 'z')
          {
              str+=s[i];
          }
          if(s[i]>='A' && s[i]<='Z')
          {
              s[i]=s[i]+32;
              str+=s[i];
          }
          if( s[i]>='0' && s[i]<='9')
          {
              str+=s[i];
          }
       }

       int i=0,j=str.length()-1;
        bool flag=false;
       while(i<j)
       {
           if(str[i]!=str[j])
           {
               flag= true;
               break;
           }
           i++;
           j--;
       }
       if(flag==false)
       {
           return true;
       }
        else
            return false;
    }
};