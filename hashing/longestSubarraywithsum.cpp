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
int main(){
    int arr[] = {1,6,7,-5,5,2};
    cout << longestSubarraywithsum(arr,6,9) << endl;
}