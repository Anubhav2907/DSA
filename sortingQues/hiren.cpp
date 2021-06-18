#include <bits/stdc++.h>
using namespace std;
int triangleCount(int arr[], int n){
    int res= 0;
    sort(arr,arr+n);
    for (int i=n-1;i>1;i--){
        int l = 0;
        int r = i-1;
        while(l<r){
            if(arr[l]+arr[r]==arr[i]){
                res++;
                cout << arr[l] << " " << arr[r] <<  " " << arr[i] << endl;
                l++;
                r--;
            }else if(arr[l]+arr[r]>arr[i]){
                r--;
            }else{
                l++;
            }
        }
        
    }
    return res;
}
int main(){
    int arr[] = {1,2,3,4,5};
    cout << triangleCount(arr,5);
}