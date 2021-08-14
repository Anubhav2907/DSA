#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, p, k;
	    cin >> n >> p >> k ;
	    int x = p%k;
	    x = x-1;
	    int s = ((n-1)/k)*k;
	    s = (n-1)-s;
	    int ans;
	    if(x > s){
	        ans = (s+1)*((n-1)/k+1) + (x-s)*((n-1)/k);
	    }else{
	        ans = ((n-1)/k+1)*(x+1);
	    }
	    for(int i = x+1; i< n; i+= k){
	        ans ++;
	        if(i == p){
	            cout << ans << endl;
	            break;
	        }
	    }
	}
	return 0;
}
