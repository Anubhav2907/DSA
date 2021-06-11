#include <bits/stdc++.h>
using namespace std;
int trapping(int arr[], int n){
    int left[n];
    int right[n];
    int res = 0;
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        left[i] =max(arr[i], left[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        right[i] = max(arr[i], right[i+1]);
    }
    for(int i = 0; i<n ; i++){
        res += (min(left[i], right[i])-arr[i]);
    }
    return res;
}
int main(){
    int arr[] = {3,0,0,2,0,4};
    cout << trapping(arr,6);
}