Problem Name: Goat Latin
https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3429/

class Solution:
    def toGoatLatin(self, S: str) -> str:
        str1=S.split(" ")
        str2=""
        for i in range(len(str1)):
            if(str1[i][0] in ["a","e","i","o","u","A","E","I","O","U"]):
                str2+=str1[i]+"ma"
            else:
                l=str1[i][0]
                for j in range(1,len(str1[i])):
                    str2+=str1[i][j]
                str2+=str1[i][0]+"ma"
            for k in range(i+1):
                    str2+="a"
            if(i!=len(str1)-1):
                str2+=" "
        return str2
                    
                
            