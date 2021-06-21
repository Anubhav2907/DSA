#include <bits/stdc++.h>
using namespace std;
vector<int> nonRepeating(int arr[], int n){
    unordered_map<int, int> m;
    vector<int> v;
    for(int i = 0; i<n; ++i){
        m[arr[i]]++;
    }
    for (int i = 0; i<n; ++i) {
        auto itr = m.find(arr[i]);
        if((itr->second)>1){
            continue;
        }
        else{
            v.push_back(itr->first);
        }
    }
    return v;
}
int main(){
    int arr[] = {1,1,2,2,3,3,4,5,6,7};
    vector<int> v = nonRepeating(arr,10);
    for(auto a : v){
        cout << a << endl;
    }
}