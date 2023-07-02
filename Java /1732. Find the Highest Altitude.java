class Solution {
    public int largestAltitude(int[] gain) {
        int max = 0;
        int p = 0;

        for(int i = 0; i < gain.length; i++){
            p += gain[i];
            max = Math.max(max, p);
        }
        return max;
    }
}
