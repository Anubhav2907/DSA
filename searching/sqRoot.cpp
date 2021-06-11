#include <bits/stdc++.h>
using namespace std;
int sqRoot(int k){
    int high = k;
    int low =1;
    int res = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int sq = mid*mid;
        if(sq == k){
            return mid;
        }else if(sq>k){
            high = mid-1;
        }else{
            low = mid+1;
            res = mid;
        }
    }return res;
}
int main(){
    cout << sqRoot(17);
}