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
		int n, a=0, i=0;
		cin >> n;
		vector<char> str(n);
		vector<char> ans(n);
		for(int i=0; i<n; i++){
			cin >> str[i];
		}
		for(int i=0; i<n; i++){
			if(str[i]=='U') ans[i]='D';
			else if(str[i]=='D') ans[i]='U';
		}while(i!=n){
			if(ans[i]=='D' || ans[i]=='U'){
				i++;
				a=0;
			}
			else if(a==0){
				ans[i]='L';
				a=1;
				i++;
			}else if(a==1){
				ans[i]='R';
				a=0;
				i++;
			}
		}

		// for(int i=0; i<n; i++){
		// 	if(str[i]!='D' || str[i]!='U'){
		// 		if(a==0){
		// 			ans[i]='L';
		// 			a=1;
		// 		}else{
		// 			ans[i]='R';
		// 			a=0;
		// 		}
		// 	}else if(str[i]=='D' || str[i]=='U'){
		// 		if(str[i]=='D'){
		// 			ans[i]='U';
		// 			i++;
		// 			a=0;
		// 		}else{
		// 			ans[i]='D';
		// 			i++;
		// 			a=0;
		// 		}
		// 	}
		// }


		for(int i=0; i<n; i++){
			cout << ans[i];
		}cout << "\n";
	}
}