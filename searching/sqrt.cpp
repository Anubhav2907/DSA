#include <bits/stdc++.h>
using namespace std;
int sqrtOf(int x){
    int low = 1;
    int high = x;
    int ans = 1;
    while(low <= high){
        int mid = (low+high)/2;
        int sq = mid*mid;
        if(sq ==x){
            return mid;
        }
        else if(sq > x){
            high = mid-1;
        }else{
            ans = mid;
            low = mid+1;
        }
    }return ans;
}
int main(){
    cout << sqrtOf(1);
}