class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
    
        if(size == 0) return false;

        unordered_set<int> us;
        
        int initial_value = nums[0];
        
        us.insert(initial_value);
        
        for(int i = 1; i < size; ++i){
            int key = nums[i];
            if(us.find(key) == us.end()) us.insert(key);
            else return true;
        }
        return false;
    }
};
// got into segmentation fault on [] as input