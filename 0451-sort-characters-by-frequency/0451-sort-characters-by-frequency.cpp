class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
        for (char ch : s) {
            freqMap[ch]++;
        }
        vector<string> buckets(s.size() + 1);
        for (auto& it : freqMap) {
            buckets[it.second].append(it.second, it.first);
        }

        string result;
        for (int i = s.size(); i > 0; --i) {
            if (!buckets[i].empty()) {
                result += buckets[i];
            }
        }

        return result;
    }
};