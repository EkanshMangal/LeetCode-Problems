Problem Name: Pascal's Triangle II

https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3421/

class Solution {
public:
    vector<int> getRow(int k) {
        
           vector<int> v1;
           v1.push_back(1);
           vector<int> v2;
           for(int j=1;j<=k;j++)
           {
               v2.push_back(1);
               for(int i=0;i<v1.size()-1;i++)
               {
                    v2.push_back(v1[i]+v1[i+1]);
               }
               v2.push_back(1);

               v1=v2;
               v2.clear();
           }
        return v1;
    }
};