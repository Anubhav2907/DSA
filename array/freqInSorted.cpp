#include <bits/stdc++.h>
using namespace std;
void freq(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            cout << arr[i] << " " << count +1 << endl;
            count = 0;
        }
    }
}
int main(){
    int arr[] = {1,1,1,1,2,2,2,3,4,4};
     freq(arr, 10);
}