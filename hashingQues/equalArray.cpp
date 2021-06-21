#include <bits/stdc++.h>
using namespace std;
bool equalArray(int arr1[], int arr2[], int n){
    unordered_map<int, int> m;
    for(int i = 0; i<n; ++i){
        m[arr1[i]]++;
    }
    for(int i = 0; i<n; ++i){
        m[arr2[i]]--;
    }
    for(auto x:m){
        if(x.second!=0){
            return false;
        }
    }
    return true;
}
int main(){
    int arr1[] = {1,2,3,4,6};
    int arr2[] = {1,2,6,4,3};
    cout << boolalpha <<equalArray(arr1,arr2,5);
}