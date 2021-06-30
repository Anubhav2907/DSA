#include <bits/stdc++.h>
using namespace std;

int maxArea(int arr[], int n){
    int res = 0;
    int ps[n], ns[n];
    stack<int> s;
    for (int i = 0; i<n; ++i) {
        while(s.empty()==false && arr[s.top()]>=arr[i]){
            s.pop();
        }
        int pse = s.empty()?-1:s.top();
        ps[i] = pse;
        s.push(i);
    }
    while(s.empty()==false){
        s.pop();
    }
    for (int i = n-1; i>=0; ++i) {
        while(s.empty()==false && arr[s.top()]>=arr[i]){
            s.pop();
        }
        int nse = s.empty()?n:s.top();
        ns[i] = nse;
        s.push(i);
    }
    for(int i=0;i<n;i++){
        int curr = arr[i];
        curr += (i-ps[i]-1)*arr[i];
        curr += (ns[i]-i-1)*arr[i];
        res = max(res,curr);
    }
    return res;
}
