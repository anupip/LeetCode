class Solution {
public:
    string reverseWords(string s) {
        std::istringstream iss(s);
        stack<string> stack;
        string word;
        while (iss >> word) {
            stack.push(word);
        }
        string result;
        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
            if (!stack.empty()) {
                result  += " ";
            }
        }
        return result;
    }
};