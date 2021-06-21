#include <bits/stdc++.h>
using namespace std;
bool subarrayWithSum(int arr[], int n, int s){
    int preSum = 0;
    unordered_set<int> s1;
    for(int i = 0; i<n; i++){
        if(preSum==s)
            return true;
        preSum+=arr[i];
        if(s1.find(preSum-s)!= s1.end()){
            return true;
        }
        s1.insert(preSum);
    }
    return false;
}
int main(){
    int arr[] = {1,4,8,2,4,6};
    cout << boolalpha << subarrayWithSum(arr,6,13);    
}