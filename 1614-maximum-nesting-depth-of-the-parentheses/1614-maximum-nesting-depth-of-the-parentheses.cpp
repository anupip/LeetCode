class Solution {
public:
    int maxDepth(string s) {
        int currentdepth = 0;
        int maxdepth = 0;

        for (char ch : s) {
            if (ch == '(') {
                currentdepth++;
                maxdepth = max(maxdepth, currentdepth);
            } else if (ch == ')') {
                currentdepth--;
            }
        }

        return maxdepth;
    }
};