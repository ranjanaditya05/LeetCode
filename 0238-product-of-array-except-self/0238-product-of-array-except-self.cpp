class Solution {
public: 
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,1);
        int pre_product= 1;
        for(int i=0; i<n; i++) {
            answer[i]= answer[i]*pre_product;
            pre_product= pre_product* nums[i];
        } 
        
        int suff_product=1;
        for(int i=n-1; i>=0; i--) {
        answer[i]=answer[i]* suff_product;
        suff_product= suff_product* nums[i];
    }
    return answer;
    }
};