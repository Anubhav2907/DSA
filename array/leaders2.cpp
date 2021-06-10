#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(int arr[], int n){
    int largest = arr[n-1];
    vector<int> v;
    v.push_back(largest);
    for(int i = n-2; i>=0 ; i--){
        if(arr[i] > largest){
            v.push_back(arr[i]);
            largest = arr[i];
        }
    }
    return v;
}
int main(){
    int arr[] = {100,90,95,10,5,8,1};
    vector<int> v1;
    v1 = leaders(arr,7);
    for(auto v:v1){
        cout << v << endl;
    }
}