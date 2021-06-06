#include <bits/stdc++.h>
using namespace std;
int stockBuyAndSell(int arr[], int n){
    int res = 0;
    for (int i = 1; i<n; ++i) {
        if(arr[i]>arr[i-1]){
            res += arr[i]-arr[i-1];
        }
    }
    return res;
}
int main(){
    int arr[] = {2,3,10,6,4,8,1};
    cout << stockBuyAndSell(arr, 7);
}