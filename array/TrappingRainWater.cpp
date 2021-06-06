#include <bits/stdc++.h>
using namespace std;
int trappingRainWater(int arr[], int n){
    int lmax[n];
    int rmax[n];
    int res = 0;
    lmax[0] = arr[0];
    rmax[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        lmax[i] = max(lmax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        rmax[i] = max(rmax[i+1],arr[i]);
    }
    for (int i =0;i<n;i++){
        res += (min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
}
int main(){
    int arr[] = {5,0,6,2,3};
    cout << trappingRainWater(arr, 5);
}