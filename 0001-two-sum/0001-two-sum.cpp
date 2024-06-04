class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int key = 0, a = 0; 
        for (int i = 0; i < n; i++) {
            a = nums[i];
            key = target - a;
            if (mpp.find(key) != mpp.end()) {
                return {mpp[key], i};              
            }
            mpp[a]=i;
        }
        return {};
    }
};
