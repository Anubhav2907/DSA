#include <bits/stdc++.h>
using namespace std;
void greaterElement(int arr[], int n){
    stack<int> s;
    s.push(0);
    cout << -1 << endl;
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int ans = s.empty()?-1:arr[s.top()];
        s.push(i);
        cout << ans <<endl;
    }
}
int main(){
    int arr[] = {15,10,18,12,4,6,2,8};
    greaterElement(arr,8);
}