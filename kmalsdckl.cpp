#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a=0;
	int l, q;
	cin >> l >> q;
	set<int> tim;
	set<int>::iterator itlow, itup;
	tim.insert(0);
	tim.insert(l);
	for(int i=0; i<q; i++){
		int c, x;
		cin >> c >> x;
		if(c==1){
			tim.insert(x);
		}else if(c==2){
			tim.insert(x);
			itlow = tim.lower_bound(x);
			itlow--;
			itup = tim.upper_bound(x);
		    cout << *itup-*itlow << "\n";
		    tim.erase(x);
		}
	}
}