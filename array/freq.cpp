#include <bits/stdc++.h>
using namespace std;
void freq(int arr[], int n){
    for (int i = 0; i<n; ++i) {
        arr[i] = arr[i] -1;
    }
    for (int i = 0; i<n ; ++i) {
        arr[arr[i]%n]+=n;
    }
    for(int i = 0; i<n ; ++i){
        cout << arr[i]/n << endl;
    }
}
int main(){
    int arr[] ={2,3,2,3,5};
    freq(arr,5);
}