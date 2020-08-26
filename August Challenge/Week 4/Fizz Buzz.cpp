Problem Name: Fizz Buzz
https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/552/week-4-august-22nd-august-28th/3437/


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>vec;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5!=0)
            {
                vec.push_back("Fizz");
            }
            else if(i%5==0 && i%3!=0)
            {
                vec.push_back("Buzz");
            }
            else if(i%3==0 && i%5==0)
            {
                vec.push_back("FizzBuzz");
            }
            else
                vec.push_back(to_string(i));
        }
        return vec;
    }
};