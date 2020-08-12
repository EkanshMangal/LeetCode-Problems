Problem Name:   H-Index

https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3420/

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int i,z;
        int n=citations.size();
        for(i=0;i<n;i++)
        {
            if((citations[(citations.size())-i-1])<=i)
            {
                z=i;
                break;
            }
        }
        return z;
    }
};