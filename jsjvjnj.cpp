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
		ll n, k;
		cin >> n >> k;
		vector<ll> a(n);
		int x=0, y=0, z=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i]==0) x++;
			if(a[i]==y){
				y++;
				z=i;
			}
		}if(x==0){
			cout << "0\n";
			continue;
		}sort(a.begin(), a.end());
		int m=n;
		vector<int> b;
		for(int i=n-x; i>0; i--){
			for(int j=i; j>0; j--){
				b.push_back(0);
			}
		}
		for(int i=0; i<x; i++){
			for(int j=i; j<z; j++){
				int h = a[j];
				h++;
				b.push_back(h);
			}for(int k=z; k<n; k++){
				b.push_back(y);
			}
		}	
		sort(b.begin(), b.end());
		// for(int i=0; i<b.size(); i++){
		// 	cout << b[i] << " ";
		// }
		cout << b[k-1] << "\n";
	}
}