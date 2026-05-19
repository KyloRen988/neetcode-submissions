class Solution {
public:
    bool isAnagram(string s, string t) {
        int slength = s.size();
        int tlength = t.size();

        if(slength != tlength) return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0; i < slength; i++ ){
            if(s[i] != t[i]) return false;
        }
        return true;
    }
};
// method 1: sorting the string tc= O(nlogn+nlogn+n) = O(nlogn)