#include <bits/stdc++.h>
using namespace std;
int chocolate(int arr[], int n, int m){
    if(m>n){
        return -1;
    }
    sort(arr,arr+n);
    int res = arr[m-1]-arr[0];
    for(int i = 1; i+m-1<n; ++i){
        res = min(res, arr[m-1+i]-arr[i]);
    }
    return res;
}
int main(){
    int arr[] = {7,3,2,4,9,12,56};
    cout << chocolate(arr, 7, 3);

}