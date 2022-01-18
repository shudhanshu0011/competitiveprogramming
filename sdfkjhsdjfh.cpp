#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
        b.push_back(x);
    }if(is_sorted(a.begin(),a.end())){
        cout << "yes\n";
        cout << "1 1";
        return 0;
    }
    int start=0, end=0;

    for(int i=1; i<n; i++){
        if(a[i]<a[i-1]){
            start=i-1;
            break;
        }
    }for(int i=start+1; i<n; i++){
        if(a[i]>a[i-1]){
            end=i-1;
            break;
        }
    }if(end==0) end=n-1;
    bool z = false;
    for(int i=end+1; i<n; i++){
        if(a[i]<a[i-1]){
            z=true;
        }
    }if(z){
        cout << "no";
        return 0;
    }sort(b.begin(),b.end());
    vector<int> ans;
    for(int i=start; i<=end; i++){
        ans.push_back(a[i]);
    }int c = start;
    for(int i=ans.size()-1; i>=0; i--){
        a[c]=ans[i];
        c++;
    }for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            z=true;
            break;
        }
    }
    if(z) cout << "no";
    else{
        cout << "yes\n";
        cout << start+1 << " " << end+1;
    }
}

