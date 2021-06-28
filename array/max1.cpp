#include <bits/stdc++.h>
using namespace std;
int maxOnes(int arr[], int n, int m){
    int res = 0;
    int res2 = 0;

    for(int i=0;i<n;i++){
        int l = m;
        int count = 0;
        if(arr[i]==1){
            count++;
            i++;
            while(l!=0 && i<n){
                while(arr[i]==1){
                    count++;
                    i++;
                }
                int k =i;
                while(arr[i]==0 && i<n){
                    i++;
                }
                if(i-k <= l){
                    count += (i-k);
                    l-=(i-k);
                }else{
                    count += l;
                    l=0;
                }
                while(arr[i]==1 && i<n){
                    count++;
                    i++;
                }
            }
            res = max(res,count);
        }
    }
    for(int i=n-1;i>=0;i--){
        int l = m;
        int count2 = 0;
        if(arr[i]==1){
            count2++;
            i--;
            while(l!=0 && i>=0){
                while(arr[i]==1){
                    count2++;
                    i--;
                }
                int k =i;
                while(arr[i]==0 && i>=0){
                    i--;
                }
                if(k-i <= l){
                    count2 += (k-i);
                    l-=(k-i);
                }else{
                    count2 += l;
                    l=0;
                }
                while(arr[i]==1 && i>=0){
                    count2++;
                    i--;
                }
            }
            res2 = max(res2,count2);
        }
    }
    return max(res,res2);
}
int main(){
    int arr[] = {0,0,0,0,0,1};
    cout << maxOnes(arr,6,2);
}