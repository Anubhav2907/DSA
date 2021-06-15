#include <bits/stdc++.h>
using namespace std;
void binarySort(int arr[], int n){
    int i=0;
    int j = n-1;
    while(true)
    {
        while(arr[i]==0)
        {
            i++;
        }
        while(arr[j]==1)
        {
            j--;
        }
        if(i>j)
        return;
        swap(arr[i],arr[j]);
    }
    
}
int main(){
    int arr[] = {0,1,0,1,0,0,1,0};
    binarySort(arr,8);
    for(int i = 0; i<8; ++i){
        cout << arr[i] << endl;
    }
}