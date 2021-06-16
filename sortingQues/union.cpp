#include <bits/stdc++.h>
using namespace std;
void union2(int arr1[], int arr2[],int n, int m){
    vector<int> v1;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(i>0&&(arr1[i]==arr1[i-1])){
            i++;
            continue;
        }
        if(j>0&&(arr2[j]==arr2[j-1])){
            j++;
            continue;
        }
        if(arr1[i]==arr2[j]){
            v1.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            v1.push_back(arr1[i]);
            i++;
        }
        else{
            v1.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        if(arr1[i]!=arr1[i-1]){
            v1.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(arr2[j]!=arr2[j-1]){
            v1.push_back(arr2[j]);
        }
        j++;
    }
    for(int i=0;i<v1.size();i++){
        cout << v1[i] << endl;
    }
}
int main(){
    int arr1[] = {1,2,2,3,4,5,6,7,8,8,8};
    int arr2[] = {2,4,10};
    union2(arr1,arr2,11,3);
}