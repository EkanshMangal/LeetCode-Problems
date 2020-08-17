Problem Name:  Best Time to Buy and Sell Stock III

https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3426/

class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        if(n==0) return 0;
        int[] left=new int[n];
        int[] right=new int[n];
        
        int leftmin=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<leftmin){
                leftmin=prices[i];
                left[i]=left[i-1];
            }
            else{
                left[i]=Math.max(left[i-1],prices[i]-leftmin);
            }
        }
        
        int rightmax=prices[n-1];
        for(int i=n-2;i>=0;i--){
            if(prices[i]>rightmax){
                rightmax=prices[i];
                right[i]=right[i+1];
            }
            else{
                right[i]=Math.max(right[i+1],rightmax-prices[i]);
            }
        }
        int max=0;
        for(int i=0;i<n;i++){
            max=Math.max(max,left[i]+right[i]);
        }
        return max;
    }
}
