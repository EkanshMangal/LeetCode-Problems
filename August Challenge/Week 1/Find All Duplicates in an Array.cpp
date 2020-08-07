Problem Name: Find All Duplicates in an Array
https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3414/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    map<int,int>fre;
        vector<int> v1;
    vector<int>::iterator it;
        for(it = nums.begin();it<nums.end();it++)
        {
            fre[*it] ++;
        }
        map<int,int>::iterator it1;
        for(it1 = fre.begin();it1!=fre.end();it1++)
        {
            if(it1->second > 1)
            {
                v1.push_back(it1->first);
            }
        }
        return v1;
        
    }
};