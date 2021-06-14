#include <bits/stdc++.h>
using namespace std;
vector<int> Repeating(int arr[], int n){
    for (int i = 0; i<n; ++i) {
        if(arr[abs(arr[i])]>0){
            arr[i] = -arr[i];
        }
    }
}