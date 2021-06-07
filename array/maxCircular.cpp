#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n){
    int res = arr[0];
    int maxEnd = arr[0];
    for(int i=1;i<n;i++){
        maxEnd = max(maxEnd+arr[i], arr[i]);
        res = max(res, maxEnd);
    }
    return res;
}
int maxCircular(int arr[], int n){
    int arr_sum =0;
    int normalSum = maxSum(arr,n);
    for (int i = 0; i<n; ++i) {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int circularSum = arr_sum + maxSum(arr, n);
    return max(normalSum, circularSum);
}
int main(){
    int arr[] = {8,-4,6,-5,4};
    cout << maxCircular(arr,5);
}