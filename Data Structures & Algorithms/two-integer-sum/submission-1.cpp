class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // method 1
        int size = nums.size();
        unordered_map<int, int> pos; 

        for(int i = 0; i < size; ++i){
            int remain = target - nums[i];
            auto it = pos.find(remain);
            if(it != pos.end()) return {it -> second, i};
            pos.insert({nums[i], i});
        }
        return {};
    }
};

// understanding constraints:
// numbers are in range of int
// also 100000000+100000000 is also in range of int bcz int range is 2pow31 ~~ 2x10pow9 bcz 2pow10 ~~ 1000
// nums might not be sorted so cant use sorting