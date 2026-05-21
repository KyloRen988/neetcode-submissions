class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // method 1
        unordered_map<int, int> pos;
        int size = nums.size();
        // remain = target - nums[0];
        pos.insert({nums[0], 0});

        for(int i = 1; i < size; ++i){
            int remain = target - nums[i];
            auto it = pos.find(remain);
            if(it == pos.end()){
                pos.insert({nums[i], i});
                continue;
            } 
            if(remain == it -> first) return {it -> second, i}; // need to return the return 
            //smallest one first so the smallest one will be the one in hashmap bca the nums[i] is just accessed.
            pos.insert({nums[i], i});
        }
        return {};
    }
};

// understanding constraints:
// numbers are in range of int
// also 100000000+100000000 is also in range of int bcz int range is 2pow31 ~~ 2x10pow9 bcz 2pow10 ~~ 1000
// nums might not be sorted so cant use sorting