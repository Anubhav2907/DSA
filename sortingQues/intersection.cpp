#include <bits/stdc++.h>
using namespace std;
void intersection(int arr1[],int arr2[], int n, int m){
    int i=0;
    int j=0;
    vector<int> v1;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            v1.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    for(int i = 0; i<v1.size() ; ++i){
        cout << v1[i] << endl;
    }
}
int main(){
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int arr2[] = {2,4,5,8,10,12};
    intersection(arr1,arr2,9,6);
}