class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cnt[nums.size()] = {0};
        for (int i = 0; i < nums.size; i++) 
            cnt[nums[i]]++;
        for(int i = 0; i < cnt.length(); i++) 
            if(cnt[num[i]] == 1) return num[i];
        return NULL;
    }
};
