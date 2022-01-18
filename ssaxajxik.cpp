#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t=0;
    cin >> t;
    while(t--){
        ll j=0, n=0, r=0, sum=0, minn = 999999999,a=0;
        cin >> n >> r;
        ll q=n;
        for(ll i=r; i>=2; i--){
            if(r>=n && n%i==0){
                cout << i << "\n";
                j=1;
                break;
            }
            while(q!=0){
                sum+=q%i;
                q=q/i;
            }if(sum<minn){
                minn=sum;
                a=i;
            }
            sum=0;
            q=n;
        }if(j==0) cout << a << "\n";
    }
}