#include <bits/stdc++.h>
using namespace std;
void cycleSort(int arr[], int n){
    for(int cs = 0; cs<n; ++cs){
        int item = arr[cs];
        int pos = cs;
        for(int i=cs+1;i<n;i++){
            if(arr[i]<item){
                pos++;
            }
        }
        swap(item,arr[pos]);
        while(pos!=cs){
            pos = cs;
            for (int i = cs+1;i<n; ++i) {
                if(arr[i]<item){
                    pos++;
                }
            }
            swap(item,arr[pos]);
        }
    }
}