#include <bits/stdc++.h>
using namespace std;
bool subarrayWithSum(int arr[], int n, int k){
    int sum = arr[0];
    int s=0;
    for(int i=1;i<n;i++){
        while(sum>k && s<i-1){
            sum = sum-arr[s];
            s++;
        }
        if(sum==k){
            return true;
        }
        if(i<n){
            sum+=arr[i];
        }
    }return sum==k;
}
int main(){
    int arr[] = {2,3,4,62,2,3,4};
    cout << boolalpha << subarrayWithSum(arr,7,63);
}