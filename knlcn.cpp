#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    if(n<=2){
    	cout << "0";
    	return 0;
    }
    vector<int> x;
    for(int i=1; i<n-1; i++){
    	if(a[i]>a[i-1] && a[i]>a[i+1]){
    		x.push_back(i+1);
    	}
    }if(x.size()==1){
    	cout << "1";
    	return 0;
    }x.push_back()
    int check=x[0];
    for(int i=1; i<x.size(); i++){
    	check = max(check,x[i]-x[i-1]);
    }cout << n/(check);
}