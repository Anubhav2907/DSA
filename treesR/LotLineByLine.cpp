#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> v;
    for(int i =0 ; i< n; i++){
        int data;
        cin >> data;
        c.push_back(data);
    }
    for(int i =1 ; i< n; i++){
        v[i] = v[i]+v[i-1];
    }
    for(int i =1 ; i< k; i++){
        int a, b;
        cin >> a >> b;
        cout << v[b] - v[a];
    }

}