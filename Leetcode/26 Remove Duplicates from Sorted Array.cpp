class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int cnt = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[cnt]) {
                cnt++;
                nums[cnt] = nums[i];
            }
        }
        return cnt+1;
    }
};
