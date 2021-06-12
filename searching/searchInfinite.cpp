#include <bits/stdc++.h>
using namespace std;
int bSearch(int arr[], int n, int k){
    int low=0;
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if (arr[mid] < k){
            low=mid+1;
        }else{
            high = mid-1;
        }
    }return -1;
}
int Search(int arr[], int n, int k){
    if(arr[0]== k){
        return 0;
    }
    int i=1;
    while(arr[i] < k){
        i=i*2;
    }
    if(arr[i] == k){
        return i;
    }
    return bSearch(arr,(i/2)+1,i-1);
}
int main(){
    int arr[] = {1,2,3,5,6,8,9,10,11,12,13,14,15};
    cout << bSearch(arr, 13, 13)<< endl;
}