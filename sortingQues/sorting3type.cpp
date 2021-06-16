#include <bits/stdc++.h>
using namespace std;
void sorting(int arr[], int n){
    int  low = 0;
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
            swap(arr[mid],arr[high]);
            high--;
        }
    }    
}
int main(){
    int arr[] = {1,0,0,2,1,0,1};
    sorting(arr,7);
    for(auto a:arr){
        cout << a << endl;
    }
}