#include <bits/stdc++.h>
using namespace std;

  //gfdht


int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}vector<int> ans(n);
	int x=1;
	ans[0]=1;
	for(int i=1; i<n; i++){
		ans[i]=a[i-1]+x;
		x=ans[i];
	}int m;
	cin >> m;
	for(int i=0; i<m; i++){
		int l;
		cin >> l;
		int result=0;
		for(int j=0; j<n; j++){
			if(l<ans[j]){
				result = j;
				cout << result << "\n";
				break;
			}else if(l>ans[n-1]){
				cout << n << "\n";
				break;
			}
		}
	}
}