#include<bits/stdc++.h>
using namespace std;
vector<int> linearProbing(int hashSize, int arr[], int n){
    vector<int> v(hashSize,-1);
    int h = hashSize;
    for(int i=0; i<n;i++){
        if(h==0){
            return v;
        }
        int k = arr[i]%hashSize;
        while(v[k]!=-1){
            k = (k+1)%hashSize;
        }
        v[k]=arr[i];
        h--;
    }
    return v;
}
int main(){
    int arr[] = {4,14,24,44};
    vector<int> v = linearProbing(10,arr,4);
    for(auto a:v){
        cout << a << " ";
    }
    cout << endl;
}