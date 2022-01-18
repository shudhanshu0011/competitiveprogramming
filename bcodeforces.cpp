#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;

int countNonIncreasing(vector<int> arr, int l, int r)
{
    int cnt = 0;
    int len = 1;
    for (int i = l-1; i < r; i++) {
        if (arr[i + 1] >= arr[i])
            len++;
        else {
            cnt += (((len + 1) * len) / 2);
            len = 1;
        }
    }
    if (len > 1)
        cnt += (((len + 1) * len) / 2);
 
    return cnt;
}





int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}while(q--){
		int t;
		cin >> t;
		if(t==1){
			int x, y;
			cin >> x >> y;
			arr[x-1]=y;
		}else if(t==2){
			int l, r, count=0;
			cin >> l >> r;
			cout << countNonIncreasing(arr, l, r) << "\n";
		}
	}
}
