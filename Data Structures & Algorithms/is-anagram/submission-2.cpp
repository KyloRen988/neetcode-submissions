class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for(int i = 0; i < s.length(); ++i){
            countS[s[i]]++;
            countT[t[i]]++;
            //in the key value pair in map, if the key dosent exists then new key is created
            // and its default value is set to 0.
        }

        return countS == countT;
    }
};
// method 2: using hashmap