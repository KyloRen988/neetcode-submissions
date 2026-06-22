class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)   return false;
        for(int i = 0; i < size ; ++i){
            for(int j = i + 1; j < size; ++j){
                if(nums[i] == nums[j])  return true;
            }
        }
        return false;
    }
};