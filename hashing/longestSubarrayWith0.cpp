#include <bits/stdc++.h>
using namespace std;
int longestSubarraywithsum(int arr[], int n,int sum){
    unordered_map<int,int> m1;
    int preSum = 0;
    int res = 0;
    for (int i = 0; i<n; ++i) {
        preSum += arr[i];
        if(sum==preSum){
            res = i+1;
        }
        if(m1.find(preSum)==m1.end()){
            m1.insert({preSum,i});
        }
        if(m1.find(preSum)!=m1.end()){
            res = max(res,i-m1[preSum-sum]);
        }
    }
    return res;
}
int longestSubarraywith0sum(int arr[], int n){
    for(int i=0; i<n; ++i){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    return longestSubarraywithsum(arr,n,0);
}
int main(){
    int arr[] = {1,0,1,0,1,0};
    cout << longestSubarraywith0sum(arr,9) << endl;
}