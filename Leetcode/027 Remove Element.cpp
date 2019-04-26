class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0) return 0;
        int cnt = nums.size();
        //int cnt[nums.size()] = {0};
        int flag = 0;
        for (int i = 0; i < cnt; i = flag == 1 ? i:i+1) {
            flag = 0;
            if(nums[i] == val) {
                for (int j = i+1; j < cnt; j++)
                    nums[j-1] = nums[j];
                cnt--;
                flag = 1;
            }
        }
        return cnt;
    }
};
