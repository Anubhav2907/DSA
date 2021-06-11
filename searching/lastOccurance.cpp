#include <bits/stdc++.h>
using namespace std;
int lastOccurance(int arr[], int n, int k){
    int low=0;
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > k){
            high = mid-1;
        }
        else if (arr[mid] < k){
            low=mid+1;
        }else{
            if(mid==n-1 || arr[mid+1]!=k){
                return mid;
            }else{
                low = mid+1;
            }
        }
    }return -1;
}
int main(){
    int arr[] = {1,2,2,3,3,5,6,8,9};
    cout << lastOccurance(arr, 9, 3)<< endl;
}