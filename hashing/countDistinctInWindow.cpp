#include <bits/stdc++.h>
using namespace std;
void countDistinct(int arr[],int n, int k){
    map<int, int> s;
    for(int i = 0; i<k; ++i){
        s[arr[i]]+=1;
    }
    cout << s.size() << " ";
    for(int i = k; i<n; ++i){
        s[arr[i-k]]-=1;
        if (s[arr[i - k]] == 0) { 
            s.erase(arr[i-k]); 
        }
        s[arr[i]]+=1;
        cout << s.size() << " ";
    }
}
int main(){
    int arr[] = {1,2,3,1,1,4,5,7,8,7,9};
    countDistinct(arr,11,4);
}