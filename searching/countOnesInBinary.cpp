#include <bits/stdc++.h>
using namespace std;
int ones(int arr[], int n){
    if(arr[0] == 0){
        return 0;
    }
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==1){
            if(arr[mid+1]==0){
                return mid+1;
            }else{
                low = mid+1;
            }
        }
        else{
            high = mid-1;
        }
    }return -1;
}
int main(){
    int arr[] = {1,1,1,1,1,1,1,1,0,0,0};
    cout << ones(arr,11);
}