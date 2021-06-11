#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n){
    for (int i = 0; i<n; ++i) {
        arr[i] += (arr[arr[i]]%n)*n;
    }
    for (int i = 0; i<n; ++i) {
        arr[i] = arr[i]/n;
    }
}
int main(){
    int arr[] ={4,0,2,1,3};
    rearrange(arr,5);
    for(auto a : arr){
        cout << a<<endl;
    }
}