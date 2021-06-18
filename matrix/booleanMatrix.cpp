#include <bits/stdc++.h>
using namespace std;
void booleanMatrix(int arr[4][4]){
    int arr1[4]={0};
    int arr2[4]={0};
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j){
            if(arr[i][j]==1){
                arr1[i]=1;
                arr2[j]=1;
            }
        }
    }
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j){
            if(arr1[i]==1||arr2[j==1]){
                arr[i][j]=1;
            }
        }
    }
}