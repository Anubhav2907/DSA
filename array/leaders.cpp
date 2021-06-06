#include <bits/stdc++.h>
using namespace std;
void leader(int arr[], int n){
    int largest = arr[n-1];
    cout << arr[n-1] << endl;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>largest){
            cout << arr[i] << endl;
            largest = arr[i];
        }
    }
}
int main(){
    int arr[] = {7,10,4,3,6,5,2};
    leader(arr,7);
}