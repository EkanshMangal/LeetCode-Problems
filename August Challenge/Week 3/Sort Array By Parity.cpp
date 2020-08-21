Problem Name: Sort Array By Parity
https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3431/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> vec2;
        int vec1[A.size()];
        int j=0,k=A.size()-1;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
                vec1[j]=A[i];
                j++;
            }
            else
            {
                vec1[k]=A[i];
                k--;
            }
        }

        for(int i=0;i<A.size();i++)
        {
            vec2.push_back(vec1[i]);
        }
        return vec2;
        
    }
};