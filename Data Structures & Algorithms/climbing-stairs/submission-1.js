class Solution {
    /**
     * @param {number} n
     * @return {number}
     */
    climbStairs(n) {
        let dp={};
        function fun(n){
           
        if(n === 0 || n === 1){
            return 1;
        }
         if(dp[n]){
            return dp[n];
         }
         dp[n]=fun(n-1)+fun(n-2);
        return dp[n];
        }
        
        return fun(n);
    }
}


