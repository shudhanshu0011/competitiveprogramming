#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const int mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll ans=0;
	for(int i=1; i<=n; i++){
		ans+=n/i;
	}cout << ans;
}