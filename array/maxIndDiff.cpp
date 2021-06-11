#include <bits/stdc++.h>
using namespace std;
int maxDiff(int arr[], int n){
    int left[n];
    int right[n];
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        left[i] = min(arr[i], left[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        right[i] = max(arr[i] , right[i+1]);
    }
    int i=0, j=0, index=0;
    while(i<n && j<n){
        if(left[i] < right[j]){
            index = max(index, j-i);
            j++;
        }
        else{
            i++;
        }
    }
    return index;
}
int main(){
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    cout << maxDiff(arr,9);
}