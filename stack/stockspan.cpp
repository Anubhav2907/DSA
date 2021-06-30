#include <bits/stdc++.h>
using namespace std;
void stockspan(int arr[], int n){
    stack<int> s;
    s.push(0);
    cout << 1 << endl;
    for (int i = 1; i < n ; ++i) {
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span = s.empty()?i+1:i-s.top();
        cout << span << endl;
        s.push(i);
    }
}
int main(){
    int arr[] = {10,40,30,60,13,15,11};
    stockspan(arr,7);
}