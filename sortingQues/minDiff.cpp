#include <bits/stdc++.h>
using namespace std;
int minDiff(int arr[], int n){
    sort(arr, arr+n);
    int minNum = INT_MAX;
    for(int i=1; i<n; ++i){
        minNum = min(minNum,arr[i]-arr[i-1]);
    }
    return minNum;
}
int main(){
    int arr[] = {2,4,5,9,7};
    cout << minDiff(arr,5);
}