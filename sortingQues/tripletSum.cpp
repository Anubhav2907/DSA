#include <bits/stdc++.h>
using namespace std;
bool triangleCount(int arr[], int n,int sum){
    int res= 0;
    sort(arr,arr+n);
    for (int i=n-1;i>1;i--){
        int l = 0;
        int r = i-1;
        while(l<r){
            if(arr[l]+arr[r]+arr[i]==sum){
                return true;
            }else if(arr[l]+arr[r]+arr[i]>sum){
                r--;
            }else{
                l++;
            }
        }
        
    }
    return false;
}
int main(){
    int arr[] = {1,4,45,6,10,8};
    cout << boolalpha << triangleCount(arr,6,14);
}