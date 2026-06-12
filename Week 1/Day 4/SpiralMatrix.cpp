#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    vector<int> spiralOrder(vector<vector<int>>& mat){
        int m=mat.size(),n=mat[0].size();
        int sR=0,sC=0,eR=m-1,eC=n-1;
        vector<int> ans;
        while(sR<=eR && sC<=eC){
            //top
            for(int j=sC;j<=eC;j++){
                ans.push_back(mat[sR][j]);
            }
            //right
            for(int i=sR+1;i<=eR;i++){
                ans.push_back(mat[i][eC]);
            }
            //bottom
            for(int j=eC-1;j>=sC;j--){
                if(sR==eR){
                    break;
                }
                ans.push_back(mat[eR][j]);
            }
            //left
            for(int i=eR-1;i>=sR+1;i--){
                if(sC==eC){
                    break;
                }
                ans.push_back(mat[i][sC]);
            }
            sR++,sC++,eR--,eC--;
        }
        return ans;
    }
};