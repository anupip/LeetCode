class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> stot;
        unordered_map<char, char> ttos;
        for (int i = 0; i < s.size(); i++) {
            char chars = s[i];
            char chart = t[i];

            // if s[i] is found
            if (stot.find(chars) != stot.end()) {
                if (stot[chars] != chart) {
                    return false;
                }
            }
            // if t[i] is found
            if (ttos.find(chart) != ttos.end()) {
                if (ttos[chart] != chars) {
                    return false;
                }
            }
            stot[chars] = chart;
            ttos[chart] = chars;
        }
        return true;
    }
};