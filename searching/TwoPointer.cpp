#include <bits/stdc++.h>
using namespace std;
bool twoPointer(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while(low <= high){
        if(arr[low]+arr[high]==k){
            return true;
        }else if((arr[low]+arr[high])>k){
            high--;
        }else{
            low++;
        }
    }
    return false;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout << boolalpha<< twoPointer(arr, 7,9);
}