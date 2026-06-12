#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, -1);
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            left = max(left, lastSeen[s[right]] + 1);
            lastSeen[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};