class Solution {
public:
    int recursion(vector<int>& nums, int l, int r, int target){
        if(l>r){
            return -1;
        }
        int mid = (l+r)/2;
        if(nums[mid]>target){
            r=mid-1;
            return recursion(nums, l, r, target);

        }
        else if(nums[mid]<target){
            l=mid+1;
            return recursion(nums,l, r, target);
        }
        else{
            return mid;
        }
    }    
    int search(vector<int>& nums, int target) {
        return recursion(nums, 0, nums.size()-1, target);
    }    
};