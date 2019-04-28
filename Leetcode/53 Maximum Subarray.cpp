class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], maxsum = sum;
        for (int i = 1; i < nums.size(); i++) {
            sum = max(nums[i], (sum+nums[i]));
            maxsum = max(sum, maxsum);
        }
        return maxsum;
    }
};
