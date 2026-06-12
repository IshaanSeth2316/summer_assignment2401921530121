#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size(), m = p.size();
        if (m > n) return ans;

        vector<int> pCount(26, 0), windowCount(26, 0);

        for (int i = 0; i < m; i++) {
            pCount[p[i] - 'a']++;
            windowCount[s[i] - 'a']++;
        }

        if (pCount == windowCount)
            ans.push_back(0);

        for (int i = m; i < n; i++) {
            windowCount[s[i] - 'a']++;        // add new char
            windowCount[s[i - m] - 'a']--;    // remove old char

            if (pCount == windowCount)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};