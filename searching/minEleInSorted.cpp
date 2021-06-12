#include <bits/stdc++.h>
using namespace std;
int minElement(int arr[], int n){
    int low = 0;
    int high = n-1;
    if((arr[0]<arr[1])&&(arr[0]<arr[high])){
        return arr[0];
    }
    if(arr[high]<arr[high-1]){
        return arr[high];
    }
    while(low<=high){
        int mid = (low+high)/2;
        if((mid>low)&&(arr[mid]<arr[mid-1])){
            return arr[mid];
        }else if((mid<high)&&(arr[mid]>arr[mid+1])){
            return arr[mid+1];
        }
        else if(arr[mid]<arr[high]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
}
int main(){
    int arr[] = {60, 10, 20, 30, 40, 50};
    cout << minElement(arr,6);
}