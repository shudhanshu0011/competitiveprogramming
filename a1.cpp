#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, n=0;
	cin >> t;
	for(n=0; n<t; n++){
		string str;
		string vow;
		string con;
		cin >> str;
		int vowel=0, cons=0, maxoccurvow=0, maxoccurcon=0, same=0;


		for(int i=0; i<str.size(); i++){
			if(str[i]==str[i+1]) same++;
		}


		for(int i=0; i<str.size(); i++){
			if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
				vow.push_back(str[i]);
				vowel++;
			}else{
				con.push_back(str[i]);
				cons++;
			}
		}

		pair<int, char> a1[5];
		a1[0] = make_pair(0, 'A');
		a1[1] = make_pair(0, 'E');
		a1[2] = make_pair(0, 'I');
		a1[3] = make_pair(0, 'O');
		a1[4] = make_pair(0, 'U');

		pair<int, char> a2[21];
		a2[0] = make_pair(0, 'B');
		a2[1] = make_pair(0, 'C');
		a2[2] = make_pair(0, 'D');
		a2[3] = make_pair(0, 'F');
		a2[4] = make_pair(0, 'G');
		a2[5] = make_pair(0, 'H');
		a2[6] = make_pair(0, 'J');
		a2[7] = make_pair(0, 'K');
		a2[8] = make_pair(0, 'L');
		a2[9] = make_pair(0, 'M');
		a2[10] = make_pair(0, 'N');
		a2[11] = make_pair(0, 'P');
		a2[12] = make_pair(0, 'Q');
		a2[13] = make_pair(0, 'R');
		a2[14] = make_pair(0, 'S');
		a2[15] = make_pair(0, 'T');
		a2[16] = make_pair(0, 'V');
		a2[17] = make_pair(0, 'W');
		a2[18] = make_pair(0, 'X');
		a2[19] = make_pair(0, 'Y');
		a2[20] = make_pair(0, 'Z');


		for(int i=0; i<vow.size(); i++){
			for(int j=0; j<5; j++){
				if(vow[i] == a1[j].second) a1[j].first++;
			}
		}sort(a1, a1+5);

		for(int i=0; i<con.size(); i++){
			for(int j=0; j<21; j++){
				if(con[i] == a2[j].second) a2[j].first++;
			}
		}sort(a2, a2+21);

		maxoccurvow = a1[4].first;
		maxoccurcon = a2[20].first;

		// cout << maxoccurvow;
		// cout << "\n" << maxoccurcon;

		// cout << vowel+((cons-maxoccurcon)*2) << "\n";
		// cout << cons+((vowel-maxoccurvow)*2);

		if(str.size()==1){
			cout << "Case #" << n+1 << ": " << "0\n";
		}else if(same+1==str.size()){
			cout << "Case #" << n+1 << ": " << "0\n";
		}else if(vowel==0 || cons==0){
			int r = min(vowel+((cons-maxoccurcon)*2), cons+((vowel-maxoccurvow)*2));
			int len = str.size();
			cout << "Case #" << n+1 << ": " << min(len, r) << "\n";
		}else cout << "Case #" << n+1 << ": " << min(vowel+((cons-maxoccurcon)*2), cons+((vowel-maxoccurvow)*2)) << "\n";
	}
}