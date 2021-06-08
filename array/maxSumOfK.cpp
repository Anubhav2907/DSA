#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n, int k){
    int max_sum = 0;
    for(int i=0;i<k;i++){
        max_sum += arr[i];
    }
    int sum = max_sum;
    for(int i=k;i<n;i++){
        max_sum = (max_sum+arr[i]-arr[i-k]);
        sum = max(sum, max_sum);
    }
    return sum;
}
int main(){
    int arr[] = {1,2,3,1,4,5,6,2};
    cout << maxSum(arr,8,3);
}