Problem Name:   Power of Four

https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3412/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int num) {
    double a = log(num) / (log(4));
    if(a  - floor(a) ==0)
        return true;
    else
        return false;
    }
};