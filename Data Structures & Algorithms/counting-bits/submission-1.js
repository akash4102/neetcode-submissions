class Solution {
    /**
     * @param {number} n
     * @return {number[]}
     */
    countBits(n) {
        if(n === 0){
            return [0];
        }
        const result=[0,1]
        for(let i=2;i<=n;i++){
            let count=result[i>>1] + (i&1);
            result.push(count);
        }
        return result;
    }
}

