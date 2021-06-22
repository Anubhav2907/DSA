#include <bits/stdc++.h>
using namespace std;
vector<int> positiveNegativePair(int arr[], int n){
    vector<int> v;
    unordered_set<int> s;
    for(int i = 0; i<n; i++){
        int k = arr[i];
        if(s.find(-k)!=s.end()){
            v.push_back(-abs(k));
            v.push_back(abs(k));
        }
        s.insert(arr[i]);
    }
    return v;
}
int main(){
    int arr[] = {1,2,4,-1,6,-4,8};
    vector<int> v = positiveNegativePair(arr,7);
    for(auto x:v){
        cout << x << endl;
    }
}