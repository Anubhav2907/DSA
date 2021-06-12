#include <bits/stdc++.h>
using namespace std;
int bSearch(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]== k){
            return mid;
        }else if(arr[mid]<k){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }return -1;
}
int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    cout << bSearch(arr,10,8);
}