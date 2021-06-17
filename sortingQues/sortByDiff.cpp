#include <bits/stdc++.h>
using namespace std;
bool comparator(int a, int b){
    return abs(a)<abs(b);
}
void sortAbs(int arr[], int n, int k){
    for (int i = 0; i<n; ++i) {
        arr[i]-=k;
    }
    stable_sort(arr,arr+n,comparator);
    for (int i = 0; i<n; ++i) {
        arr[i]+=k;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    sortAbs(arr,5,6);
    for(auto a:arr){
        cout << a << endl;
    }
}