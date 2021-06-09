#include <bits/stdc++.h>
using namespace std;
bool Occured(int arr[], int n){
    int res = 0, count =1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[res]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            res = i;
            count = 1;
        }
    }
    count =0;
    for (int i = 0; i<n ; ++i) {
        if(arr[i] == arr[res]){
            count++;
        }
    }if(count > n/2){
        return true;
    }return false;
}
int main(){
    int arr[] = {3,8,3,3,20,4,5};
    cout << boolalpha << Occured(arr,6) << endl;
}