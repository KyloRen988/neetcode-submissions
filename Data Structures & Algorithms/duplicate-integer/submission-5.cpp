class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());// vector initialization
        return seen.size() < nums.size(); //note that unordered_set is a set so it will not contain 
                                        //duplicate elements so if the nums vector contains duplicate
                                        // elements then size of the seen set will definately less than nums size
    }
};
// do think about corner case: empty vector nums.