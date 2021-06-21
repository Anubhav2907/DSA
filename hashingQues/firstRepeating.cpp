#include <bits/stdc++.h>
using namespace std;
int firstRepeating(int arr[], int n){
    int res = INT_MAX;
    unordered_map<int, int> m;
    for (int i = 0; i<n;i++){
        if(m.find(arr[i])!=m.end()){
            auto itr = m.find(arr[i]);
            res = min(res,(itr->second));
        }
        else{
            m.insert({arr[i],i});
        }
    }
    return res;
}
int main(){
    int arr[] = {9,2,3,1,2,3,4,5};
    cout << firstRepeating(arr,8);
}