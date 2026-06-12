#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;   // where we write result
        int i = 0;       // read pointer

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            // count group length
            while (i < n && chars[i] == curr) {
                i++;
                count++;
            }

            // write character
            chars[write++] = curr;

            // write count if > 1
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[write++] = c;
                }
            }
        }

        return write;
    }
};