#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int s, n;
	cin >> s >> n;
	pair<int, int> dr[1000];
	for(int i=0; i<n; i++){
		int x, y;
		cin >> x >> y;
		dr[i] = make_pair(x, y);
	}sort(dr, dr+n);
	int j=0;
	for(int i=0; i<n; i++){
		if(dr[i].first<s){
			s+=dr[i].second;
			j++;
		}else{
			cout << "NO";
			break;
		}
	}if(j==n){
		cout << "YES";
	}
}