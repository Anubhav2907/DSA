#include <bits/stdc++.h>
using namespace std;
bool zeroSum(int arr[], int n){
    int preSum = 0;
    unordered_set<int> s1;
    for(int i=0;i<n;i++){
        preSum += arr[i];

        if(preSum==0){
            return true;
        }
        if(s1.find(preSum)!=s1.end()){
            return true;
        }
        s1.insert(preSum);
    }
    return false;
}
int main(){
    int arr[] = {1,2,4,-7,8};
    cout << boolalpha << zeroSum(arr,5);
}