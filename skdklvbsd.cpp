#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;

bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int z = sqrt(n);
		int y = (z+1)*(z+1);
		if(n==1){
			cout << "1 1\n";
		}else if(n==2){
			cout << "1 2\n";
		}else if(n==6){
			cout << "2 3\n";
		}else if(n==8){
			cout << "3 2\n";
		}

		else if(n==z*z+z+1){
			cout << z+1 << " " << z+1 << "\n";
		}else if(isPerfectSquare(n)){
			cout << z << " " << "1" << "\n";
		}

		else{
			if(n<=z*z+z){
				cout << n-(z*z) << " " << z+1 << "\n";
			}else{
				cout << z+1 << " " << y-n+1 << "\n";
			}
		}
	}
}