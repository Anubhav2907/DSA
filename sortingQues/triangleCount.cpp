#include <bits/stdc++.h>
using namespace std;
int triangleCount(int arr[], int n){
    int count= 0;
    sort(arr,arr+n);
    for (int i=n-1;i>1;i--){
        int l = 0;
        int r = i-1;
        while(l<r){
            if(arr[l]+arr[r]>arr[i]){
                count+=(r-l);
                r--;
            }else{
                l++;
            }
        }
        
    }
    return count;
}