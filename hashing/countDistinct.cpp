#include <bits/stdc++.h>
using namespace std;
int count(int arr[], int n){
    unordered_set<int> s1;
    for (int i = 0; i<n; ++i) {
        s1.insert(arr[i]);
    }
    //unordered_set<int> s1(arr,arr+n);
    return s1.size();
}
int main(){
    int arr[] = {1,2,4,6,5,1,2};
    cout<<count(arr,7);
}