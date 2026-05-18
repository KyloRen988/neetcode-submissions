class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int value: nums){
            if(seen.count(value)) return true;
            seen.insert(value);
        }
        return false;
    }
};
// got into segmentation fault on [] as input