#include <bits/stdc++.h>
using namespace std;
void nextGreater(int arr[], int n){
    stack<int> s;
    s.push(arr[n-1]);
    cout << -1 << endl;
    for (int i = n-2; i>=0 ; i--) {
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int ans = s.empty()?(-1):s.top();
        cout << ans << endl;
        s.push(arr[i]);
    }
}