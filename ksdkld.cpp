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
        int ans=0;
        for(int i=1; i<=n; i++){
            int a, b;
            cin >> a >> b;
            if(n-i<=a && i-1<=b) ans++;
        }cout << ans << "\n";
    }
}