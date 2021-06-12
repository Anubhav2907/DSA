#include<bits/stdc++.h>
using namespace std;
int Repeating(int arr[], int n){
    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(arr[slow]!=arr[fast]);
    slow = arr[0];
    while(slow!=fast){
        fast = arr[fast];
    }
    return slow;
}
int main(){
    int arr[] = {1,1,1,3,5,4,6,2};
    cout << Repeating(arr,8) << endl;
}