#include <bits/stdc++.h>
using namespace std;
bool subarrayWithSum(int arr[], int n, int s){
    int low = 0;
    int high = 0;
    int sum = arr[0];
    while(low<n && high<n){
        if(sum==s){
            return true;
        }
        else if(sum>s){
            sum-=arr[low];
            low++;
        }else{
            high++;
            sum+=arr[high];
        }
    }
}