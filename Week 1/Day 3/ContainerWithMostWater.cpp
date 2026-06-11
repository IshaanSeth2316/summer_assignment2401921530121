#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1;
        int maxWater=0;
        while(lp<rp){
            int ht=min(height[lp],height[rp]);
            int w=rp-lp;
            int currWater=w*ht;
            maxWater=max(maxWater,currWater);
            height[lp]<height[rp] ? lp++:rp--; 
        }
        return maxWater;
    }
};