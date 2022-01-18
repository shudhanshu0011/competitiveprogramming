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
        string s;
        cin >> s;
        int a=0;
        for(int i=0; i<n; i++){
            if(s[i]=='a') a++;
        }if(a<2){
            cout << "-1\n";
            continue;
        }
        int aa=0;
        for(int i=1; i<n; i++){
            if(s[i]=='a' && s[i-1]=='a'){
                aa++;
                break;
            }
        }if(aa!=0){
            cout << "2\n";
            continue;
        }
        int ina=0;
        for(int i=0; i<n; i++){
            if(s[i]=='a'){
                ina = i;
                break;
            }
        }vector<pair<int,pair<int,int>>> dr;
        for(int i=ina+1; i<n; i++){
            if(s[i]=='a'){
                dr.push_back(make_pair(i-ina-1,make_pair(ina,i)));
                ina=i;
            }
        }stable_sort(dr.begin(), dr.end());
        if(dr[0].first>2){
            cout << "-1\n";
            continue;
        }if(dr[0].first==1){
            cout << "3\n";
            continue;
        }int x=0, check=0;
        while(dr[x].first==2){
            int b=0, c=0;
            if(dr[x].second.first+1=='b') b++;
            else c++;
            if(dr[x].second.first+2=='b') b++;
            else c++;
            if(b==c){
                check=1;
                break;
            }
            x++;
        }if(check==1){
            cout << "4\n";
            continue;
        }cout << "-1\n";
    }
}