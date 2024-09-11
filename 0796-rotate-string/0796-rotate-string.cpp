class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        } else {
            int n = s.length();
            for (int j = 0; j < n; j++) {
                char temp = s[0];
                for (int i = 1; i <= n; i++) {
                    s[i - 1] = s[i];
                }
                s[n - 1] = temp;
                if (s == goal) {
                    return true;
                }
            }
            return false;
        }
    }
};