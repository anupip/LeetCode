class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;
        if (s.size() != t.size())
            return false;
        for (char ch : s) {
            mpp[ch]++;
        }
        for (char ch1 : t) {
            if (mpp[ch1] == 0) {
                return false;
            }
            mpp[ch1]--;
        }
        return true;
    }
};