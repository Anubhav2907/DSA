#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> seperateChaining(int hashSize, int arr[], int n){
    vector<vector<int>> v1(10);
    for(int i=0; i<n;i++){
        int k = arr[i]%hashSize;
        v1[k].push_back(arr[i]);
    }
    return v1;
}
int main(){
    int arr[] = {92,4,14,24,44,91};
    vector<vector<int>> v = seperateChaining(10,arr,6);
    for (int i = 0; i<v.size(); ++i) {
        for(auto a:v[i]){
            cout << a << " ";
        }
        cout << endl;
    }
}