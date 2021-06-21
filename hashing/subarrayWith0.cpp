#include <bits/stdc++.h>
using namespace std;
bool subarrayWithSum(int arr[], int n){
    int sum = 0;
    unordered_set<int> s1;
    for(int i = 0; i<n; ++i){
        sum+=arr[i];
        if(s1.find(sum) != s1.end()){
            return true;
        }
        s1.insert(sum);
    }
    return false;
}
int main(){
    int arr[] = {1,2,3,5,-10};
    cout << boolalpha << subarrayWithSum(arr,5) << endl;
}