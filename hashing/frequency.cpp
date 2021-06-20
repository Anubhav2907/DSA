#include <bits/stdc++.h>
using namespace std;
void freq(int arr[], int n){
    unordered_map<int, int> m1;
    for (int i = 0; i<n; ++i) {
        m1[arr[i]]++;
    }
    for(auto it:m1){
        cout << it.first << " - " << it.second << endl;
    }
}
int main(){
    int arr[] = {1,2,3,6,7,1,4,3,6,9};
    freq(arr, 10);
}