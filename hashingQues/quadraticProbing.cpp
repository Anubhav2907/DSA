#include<bits/stdc++.h>
using namespace std;
vector<int> quadraticProbing(int hashSize, int arr[], int n){
    vector<int> v(hashSize,-1);
    int h = hashSize;
    for(int i=0; i<n;i++){
        if(h==0){
            return v;
        }
        int p = 1;
        int k = arr[i]%hashSize;
        while(v[k]!=-1){
            k = (arr[i]+p*p)%hashSize;
            p++;
        }
        v[k]=arr[i];
        h--;
    }
    return v;
}
int main(){
    int arr[] = {21,10,32,43};
    vector<int> v = quadraticProbing(11,arr,4);
    for(auto a:v){
        cout << a << " ";
    }
    cout << endl;
}