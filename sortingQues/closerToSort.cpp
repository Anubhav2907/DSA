#include <bits/stdc++.h>
using namespace std;
int closerToSort(int arr[], int n, int x){
    int low =0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]== x){
            return mid;
        }
        if(arr[mid+1]== x){
            return mid+1;
        }
        if(arr[mid-1]== x){
            return mid-1;
        }
        if(arr[mid]> x){
            high=mid-1;
        }
        if(arr[mid]< x){
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {3,2,10,4,40};
    cout << closerToSort(arr,5,4);
}