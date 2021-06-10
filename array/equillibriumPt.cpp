#include <bits/stdc++.h>
using namespace std;
bool Equillibrium(int arr[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int left = 0;
    for(int i=0;i<n;i++){
        if(left == sum-arr[i]){
            return true;
        }
        left+= arr[i];
        sum-=arr[i];
    }
    return false;
}
int main(){
    int arr[] = {3,8,4,-9,20,6};
    cout << boolalpha << Equillibrium(arr,6) << endl;
}