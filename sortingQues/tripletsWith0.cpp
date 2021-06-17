#include <bits/stdc++.h>
using namespace std;
bool triplet(int arr[], int n){
    sort(arr,arr+n);
    for (int i=n-1; i>1; i--) {
        int l = 0;
        int r = i-1;
        while(l<r){
            if(arr[l]+arr[r]+arr[i]==0){
                return true;
            }
            else if(arr[l]+arr[r]+arr[i]>0){
                r--;
            }
            else{
                l++;
            }
        }
    }
    return false;
}
int main(){
    int arr[] = {1,1,1,2,3,4,-7};
    cout << boolalpha <<triplet(arr,7);
}