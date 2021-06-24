#include <bits/stdc++.h>
using namespace std;
void colors(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}
int main(){
    int arr[] = {2,0,2,1,1,0};
    colors(arr,6);
    for(auto x:arr){
        cout << x << endl;
    }
}