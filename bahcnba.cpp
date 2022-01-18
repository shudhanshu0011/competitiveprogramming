#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(),x.end()
#define LOL cout << '\n';
#define kill(x) {cout << x << '\n'; return;}
#define sz(x) ((int)x.size())
#define INF LONG_LONG_MAX
#define NINF LONG_LONG_MIN
#define deb(x) cout << "[" << (#x) << "=" << (x) << "]" << '\n'
#define deb2(x,y) cout << "[" << (#x) << "=" << (x) << "] [" << (#y) << "=" << (y) << "]" << '\n'
#define deb3(x,y,z) cout << "[" << (#x) << "=" << (x) << "] [" << (#y) << "=" << (y) << "] [" << (#z) << "=" << (z) << "]" << '\n'

const int _max=2e5+1,nmax=1e6+1;

void solve(){

  int n,m; cin>>n>>m;

  assert(n>=1 && n<nmax);
  assert(m>=0 && m<=n);

  int zers = n - m;
  
  int x = zers/(m+1);

  int t = zers%(m+1);

  int ans = (t* (( (x+1)*(x+2))/2 )) + (m+1-t)*( (x*(x+1))/2 );

  cout << ans << "\n";

}

signed main() {
  #ifdef Kaushal_26
    freopen("a.in", "r", stdin); 
    freopen("b.out", "w", stdout);  
    freopen("e.out", "w", stderr);
  #endif
  int _ = 1; cin >> _;
  assert(_>=1 && _<_max);
  for(int i = 1 ; i <= _ ; i++){
      // cout << "\nCase #" << i << ": \n";
      solve();
  }
  return 0;
}