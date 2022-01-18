#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define DEBUG true
const int mod = 1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a, n;
    cin >> a >> n;
    int ans = 0;
    bool x=true; int minn=1,maxx=n;
    while(x==true){
        bool z = true;
        for(int i=2; i<=maxx/2; i++){
            if(maxx%i==0){
                minn=min(i,maxx/i); maxx = max(i,maxx/i); 
                if(maxx<=n){
                    if(maxx!=minn)ans+=2;
                    else ans++;
                }
                z=false;
                break;
            }
        }if(z){
            x=false;
        }
    }if(n<=a) ans+=2;
    if(n==1){
        cout << "1";
        return 0;
    }if(a==1){
        cout << "0";
        return 0;
    }
    cout << ans;
}