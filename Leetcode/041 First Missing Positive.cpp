class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int hash[n+1] = {0};
        for (int i = 0; i < n; i++)
            if(nums[i] > 0 && nums[i] <= n)
                hash[nums[i]] = 1;
        int result;
        for (result = 1; result <= n; result++)
            if(hash[result] == 0) break;
        return result;
    }
};