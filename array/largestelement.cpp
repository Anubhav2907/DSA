#include <bits/stdc++.h>
using namespace std;
int largest (int arr[], int n){
    int res = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > res){
            res = arr[i];
        }
    }return res;

}
int main(){
    int arr[] = {12,2,3,6,23,99,17};
    cout << largest(arr,7);
}