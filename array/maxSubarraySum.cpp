#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
    int res =arr[0];
    int end = arr[0];
    for(int i=1;i<n;i++){
       end = max(arr[i],end+arr[i]);
       res = max(res,end);
    }return res;
}
int main(){
    int arr[] = {3,8,2,4,-5,6};
    cout << maxSubarraySum(arr, 6);
}