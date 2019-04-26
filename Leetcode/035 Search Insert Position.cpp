class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] < target /*&& i != nums.size()-1*/) continue;
            if(nums[i] == target)   return i;
            else if(nums[i] > target)   return i==0 ? 0:i;
        }
        return nums.size();
    }
};
