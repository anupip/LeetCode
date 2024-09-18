class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int t = 2;
        vector<int> ans;
        while (t > 0) {
            for (int num : nums) {
                ans.push_back(num);
            }
            t--;
        }
        return ans;
    }
};