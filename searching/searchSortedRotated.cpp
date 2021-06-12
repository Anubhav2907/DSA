#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[low] < arr[mid]){
            if(k>=arr[low] && k <=arr[mid]){
                high = mid-1;
            }else{
                low=mid+1;
            }
        }else{
            if(k>=arr[mid] && k <=arr[high]){
                low = mid+1;
            }else{
                high=mid-1;
            }
        }
    }
}