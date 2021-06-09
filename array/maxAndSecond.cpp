#include <bits/stdc++.h>
using namespace std;
vector<int> maxAndSecond(int arr[], int n){
    int max=arr[0];
    int second = -1;
    vector<int> v1;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            second = max;
            max = arr[i];
        }else{
            if(second==-1){
                second= arr[i];
            }else if(second<arr[i]){
                second=arr[i];
            }
        }
    }
    v1.push_back(second);
    v1.push_back(max);

    return v1;
}
int main(){
    int arr[] = {5,8,6,9,4,1,2,3};
    vector<int> v1 = maxAndSecond(arr,8);
    for(auto v:v1){
        cout << v << endl;
    }
}
