#include <bits/stdc++.h>
using namespace std;
int leftMostIndex(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]== k){
            if(arr[mid-1]!=k){
                return mid;
            }else{
                high = mid-1;
            }
        }else if(arr[mid]<k){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }return -1;
}
int main(){
    int arr[] = {1,1,2,2,3,4,5,5,6,7};
    cout << leftMostIndex(arr,10,1);
}