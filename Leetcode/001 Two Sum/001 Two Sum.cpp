/*1*/
//12ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> v;
        for(int i = 0; i < nums.size(); i++) {
        	int x = target - nums[i];
        	if(hash.find(x) != hash.end()) {
        		v.push_back(hash[x] + 1);
        		v.push_back(i+1);
        		return v;
			}
			hash[nums[i]] = [i];
		}
		return v;
    }
};

/*2*/
//8ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++) {
        	if(hash.find(target - nums[i]) != hash.end()) {
        		return {hash[target - nums[i]], i};
			}
			hash[nums[i]] = i;
		}
		return {};
    }
};
