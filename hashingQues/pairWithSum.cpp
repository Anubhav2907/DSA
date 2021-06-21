#include <bits/stdc++.h>
using namespace std;
bool pairWithSum(int arr[], int n, int sum){
    unordered_set<int> s;
    for(int i = 0; i<n; i++){
        if(s.find(sum-arr[i])!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    cout << boolalpha<<pairWithSum(arr,8,16);
}