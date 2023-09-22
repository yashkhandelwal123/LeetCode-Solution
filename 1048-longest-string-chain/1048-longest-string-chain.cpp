class Solution {
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string& a, const string& b) {
            return a.size() < b.size();
        });

        unordered_map<string, int> dp;

        int maxLength = 1;

        for (const string& word : words) {
            int currentLength = 1;
            for (int i = 0; i < word.size(); ++i) {
                string predecessor = word.substr(0, i) + word.substr(i + 1);
                if (dp.count(predecessor)) {
                    currentLength = max(currentLength, dp[predecessor] + 1);
                }
            }
            dp[word] = currentLength;
            maxLength = max(maxLength, currentLength);
        }

        return maxLength;
    
    }
};