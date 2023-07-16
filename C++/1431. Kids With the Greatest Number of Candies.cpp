class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

       int n = candies.size();
       vector<bool> ans(n);

       //finding the largest element
       int largestElement = candies[0];
       for(int i = 0; i <n; i++){
           if(largestElement < candies[i]) largestElement = candies[i];
       } 

       //find answer for each child
       for(int i = 0; i < n; i++){
           if(candies[i] + extraCandies >= largestElement){
               ans[i] = true;
           }
           else{
               ans[i] = false;
           }
       }
       return ans;
    }
};
