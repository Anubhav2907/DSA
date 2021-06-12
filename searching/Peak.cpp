 #include <bits/stdc++.h>
 using namespace std;
 int peak(int arr[], int n){
     int low = 0;
     int high = n-1;
     while(low <= high){
         int mid = (low+high)/2;
         if((mid==0 || arr[mid]>=arr[mid-1])&&(mid==n-1 || arr[mid]>=arr[mid+1])){
             return mid;
         }else if(arr[mid]<arr[mid-1]){
             high=mid-1;
         }else{
             low = mid+1;
         }
     }return -1;
 }
 int main(){
     int arr[] = {1,2,2,2,2,6,9};
     cout << peak(arr,7);
 }