class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s(nums1.begin(), nums1.end());
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());


        int i = 0, j = 0;
        vector<int> ans;


        for(int x: nums2){
            if(s.erase(x)){
                ans.push_back(x);
            }
        }
        return ans;
    }
};
