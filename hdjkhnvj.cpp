#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m=3, n=3, len=500;
	vector<vector<int>> land(m, vector<int> (n));
	vector<int> ans(len);
        int a=0;
        for(int i=0; i<land.size(); i++){
            for(int j=0; j<land[0].size(); j++){

                if(land[i-1][j-1]==0 || land[i+1][j+1]==0){
                    ans[a]=i;
                    ans[a+1]=j;
                    // ans.push_back(i);
                    // ans.push_back(j);
                    a+=2;
                }
            }
        }for(int i=0; i<ans.size(); i++){
        	cout << ans[i] << " ";
        }
}