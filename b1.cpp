#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<vector<char>> arr(n, vector<char> (n, 0));
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> arr[i][j];
			}
		}int test=0, dot=0, ans=100000000, ans1=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(arr[i][j]=='.') dot++;
				if(arr[i][j]=='O') test=1;
			}if(test==0){
				ans = min(ans, dot);
				dot=0;
			}test = 0, dot = 0;
		}for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(arr[j][i]=='.') dot++;
				if(arr[j][i]=='O') test=1;
			}if(test==0){
				ans = min(ans, dot);
				dot=0;
			}test = 0, dot = 0;
		}

		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(arr[i][j]=='.') dot++;
				if(arr[i][j]=='O') test=1;
			}if(test==0 && dot == ans){
				ans1++;
				for(int j=0; j<n; j++){
					if(arr[i][j]=='.'){
						arr[i][j] = 'S';
					}
				}
			}test = 0, dot = 0;
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(arr[j][i]=='S'){
					test=1;
					break;
				}
				if(arr[i][j]=='.') dot++;
				if(arr[i][j]=='O') test=1;
			}if(test=0 && dot == ans) ans1++;
			test=0, dot=0;
		}
		if(ans==100000000) cout << "Impossible\n";
		else cout << ans << " " << ans1 << "\n"; 
	}
}