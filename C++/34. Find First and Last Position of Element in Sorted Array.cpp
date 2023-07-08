class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start)/2;
    vector<int> ans (2, -1);   //?? don't know why we use 2

    while(start <= end){

        if(nums[mid] == target){
            ans[0] = mid;
            end = mid - 1;
        }
        //right me jao
        else if(target > nums[mid]){
            start = mid + 1;
        }
        //key < arr[mid]
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    

    start = 0;
    end = nums.size() - 1;
    mid = start + (end - start)/2;
    

    while(start <= end){

        if(nums[mid] == target){
            ans[1] = mid;
            start = mid + 1;
        }
        else if(target > nums[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;


    }
};
