class Solution {
public:
    int singleNumber(vector<int>& arr) {
        std::unordered_map<int, int> counts;

        for (int num : arr) {
            counts[num]++;
        }
        for (int num : arr) {
            if (counts[num] == 1) {
                return num;
            }
        }

        return -1;
    }
};