#include <bits/stdc++.h>
using namespace std; 
vector<vector<int>> stock(int arr[], int n){
    vector<vector<int>> v;
    for (int i = 1; i<n; ++i) {
        vector<int> v1;
        if(arr[i]>arr[i-1]){
            v1.push_back(i-1);
            while(i<n){
                if(arr[i]>arr[i-1]){
                    i++;
                }else{
                    break;
                }
            }
            v1.push_back(i-1);
            v.push_back(v1);
        }
    }
}