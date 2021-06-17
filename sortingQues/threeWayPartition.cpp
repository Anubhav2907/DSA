#include <bits/stdc++.h>
using namespace std;
void threeWayPartition(int arr[], int n, int a, int b){
    int low = 0;
    int high = n-1;
    int mid = 0;
    while(mid<=high){
        if(arr[mid]<a){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]>b){
            swap(arr[mid],arr[high]);
            high--;
        }
        else{
            mid++;
        }
    }
}
int main(){
    int arr[] = {1,4,5,2,12,4,3,112,45};
    threeWayPartition(arr,8,3,6);
    for(auto a:arr){
        cout << a << endl;
    }
}