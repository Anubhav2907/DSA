#include <bits/stdc++.h>
using namespace std;

pair<int, int> findRepeating(int arr[], int n){
    int low = 0;
    int high = n-1;
    bool flag = false;
    pair<int,int> p;
    p.first=-1;
    p.second=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==arr[mid-1]){
            p.first=arr[mid];
            flag = true;
            break;
        }else if(mid-low == arr[mid]-arr[low]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }if(flag){
        p.second=n-(arr[n-1]-arr[0]);
    }
    return p;
}
int main(){
    int arr[] = {1,2,3,3,4};
    pair<int,int> p;
    p = findRepeating(arr,5);
    cout << p.first << " " << p.second << endl;
}