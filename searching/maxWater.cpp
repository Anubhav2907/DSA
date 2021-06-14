#include <bits/stdc++.h>
using namespace std;
int maxWater(int arr[], int n){
    int low = 0;
    int high = n-1;
    int res = 0;
    while(low<=high){
        if(arr[low]>arr[high]){
            res = max(res, arr[high]*(high-low-1));
            high--;
        }
        else if(arr[low]<arr[high]){
            res = max(res,arr[low]*(high-low-1));
            low++;
        }else{
            res = max(res, arr[low]*(high-low-1));
            low++;
            high--;
        }
    }
    return res;
}
int main(){
    int arr[] = {2,1,3,4,6,5};
    cout << maxWater(arr,6) << endl;
}