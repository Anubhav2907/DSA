#include <bits/stdc++.h>
using namespace std;
void reverseInGroups(int arr[], int n,int k){
    for (int i = 0; i<n; i+=k) {
        int low = i;
        int high = min(i+k-1,n-1);
        while(low<=high){
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }
}
int main(){
    int arr[] = {3,8,4,-9,20,6};
    reverseInGroups(arr,6,2);
    for(auto a : arr){
        cout << a << endl;
    }
}