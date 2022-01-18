#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;

ll subString(string s, ll n){
    ll sum=0;
    for (ll m = 0; m < n; m++){
        ll count = 0;
        for (ll len = 1; len <= n - m; len++){
            string str = s.substr(m, len);
            char x;
            for(ll i=0; i<str.length(); i++){
                if(str[i]=='X'){
                    x = 'X';
                    break;
                }
                else if(str[i]=='O'){
                    x='O';
                    break;
                }
            }for(ll i=0; i<str.length(); i++){
                if(x=='X'){
                    if(str[i]=='O'){
                        count++;
                        x='O';
                    }
                }if(x=='O'){
                        if(str[i]=='X'){
                    count++;
                        x='X';
                    }
                }
            }
        }sum=((sum%mod)+(count%mod))%mod;
    }return sum%mod;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll t;
    cin >> t;
    for(ll k=0; k<t; k++){
        ll n, ans;
        cin >> n;
        string s;
        cin >> s;
        ans = subString(s,s.length());
        cout << "Case #" << k+1 << ": " << ans << "\n";
    }
}