#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int arr[n];
    arr[0]=0;
    for (int i = 0; i<n ; ++i) {
        if(n<3){
            arr[i]=i;
        }
        else
            arr[i] = arr[i-3]+arr[i-2]+arr[i-1];
    }
    return arr[n-1];
}
int main(){
    cout << sum(2) << endl;
}