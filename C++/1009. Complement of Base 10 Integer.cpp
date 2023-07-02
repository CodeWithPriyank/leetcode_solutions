class Solution {
public:
    int bitwiseComplement(int n) {
        
        int x = n;
        int start = 0;

        //edge case
        if(n == 0){
            return 1;
        }
        while(x!=0){
            start = (start << 1) | 1;
            x = x >> 1;
        }

        int ans = (~n) & start;
        return ans;
    }
};
