class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0, r=n-1, mid=0;

        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]>target){
                r=mid-1;
            }
            if(nums[mid]<target){
                l=mid+1;
            }
            if(nums[mid]==target){
                return mid;
            }
        }  
        if(nums[mid]>target){
            return mid;
            } else{
            return mid+1;
        }         
    }    
};