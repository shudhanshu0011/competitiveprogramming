#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	scanf("%d", &t);
	while(t--){
		int n, count1=0, count2=0, a=0;
		scanf("%d", &n);
		vector<char> arr(n);
		for(int i=0; i<n; i++){
			scanf("%s", &arr[i]);
			if(arr[i]=='a') count1++;
			if(arr[i]=='b') count2++;
		}if(count1==count2){
			printf("1 %d\n", n);
		}else{
			for(int i=0, j=n-1; i<n, j>=0;){
				if(count1==count2){
					printf("%d %d\n", i+1, j+1);
					a=1;
					break;
				}else if(count1>count2){
					if(arr[i]=='a'){
						i++;
						count1--;
					}else if(arr[j]=='a'){
						j--;
						count1--;
					}
				}else if(count1<count2){
					if(arr[i]=='b'){
						i++;
						count2--;
					}else if(arr[j]=='b'){
						j--;
						count2--;
					}
				}if(i>=j){
					printf("-1 -1\n");
					break;
				}
			}
		}
	}
}