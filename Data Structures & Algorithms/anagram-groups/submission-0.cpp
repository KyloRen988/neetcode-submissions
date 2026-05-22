class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // method 1: sorting
        // unordered_set<string> seen;
        // vector<vector<string>> op;
        unordered_map<string, vector<string>> grp;

        for(string actualS: strs){
            string sortedS = actualS;
            sort(sortedS.begin(), sortedS.end()); // sort() returns void, sorting happens in-place.
            grp[sortedS].push_back(actualS);
        } 

        vector<vector<string>> result;
        for(auto pair: grp){
            result.push_back(pair.second);
        }
        return result;
    }
};
