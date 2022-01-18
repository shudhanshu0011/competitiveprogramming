#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define DEBUG true
const int mod = 1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, h=0;
    cin >> a;
    for(int j=1; j<=1; j++){
        set<int> ans;
        bool x=true; int minn=2,maxx=6;
        while(x==true){
            bool z = true;
            for(int i=2; i<=maxx/2; i++){
                if(maxx%i==0){
                    minn=min(i,maxx/i); maxx = max(i,maxx/i); 
                    ans.insert(minn);
                    z=false;
                    break;
                }
            }if(z){
                x=false;
            }
        }ans.insert(maxx);
        h+=(ans.size());
    }cout << h;
}