#include <bits/stdc++.h>
using namespace std;
int floor(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]== k){
            return mid;
        }else if(arr[mid]>k){
            high=mid-1;
        }else{
            ans= mid;
            low=mid+1;
        }
    }return ans;
}
int main(){
    int arr[] = {1,2,8,10,11,12,19};
    cout << floor(arr,7,5);
}