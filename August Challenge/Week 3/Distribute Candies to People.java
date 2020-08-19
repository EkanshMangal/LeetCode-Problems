Problem Name: Distribute Candies to People

https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3427/

class Solution {
    public int[] distributeCandies(int candies, int n) {
        int[] result = new int[n];
        for (int i = 0; candies > 0; i++) {
            result[i % n] += Math.min(candies, i + 1);
            candies -= i + 1;
        }
        return result;
    }
}
