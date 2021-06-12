#include <bits/stdc++.h>
using namespace std;
double median(int arr1[], int arr2[], int n1, int n2){
    int begin1 = 0;
    int end1 = n1;
    while(begin1<=end1){
        int i1 = (begin1+end1)/2;
        int i2 = ((n1+n2+1)/2)-i1;
        int max1 = (i1==0) ? INT_MIN : arr1[i1-1]; 
        int min1 = (i1==n1) ? INT_MAX : arr1[i1]; 
        int max2 = (i2==0) ? INT_MIN : arr2[i2-1]; 
        int min2 = (i2==n2) ? INT_MAX : arr2[i2]; 
        if((max1<=min2)&&(max2<=min1)){
            if((n1+n2)%2==0){
                return ((double)((max(max1,max2)+min(min1,min2))/2));
            }else{
                return ((double)(max(max1,max2)));
            }
        }
        else if(max1>min2){
            end1 = i1-1;
        }else{
            begin1 = i1+1;
        }
    }
}
int main(){
    int a1[] = {20,30,40,50};
    int a2[] = {25,28,33,37,39,45};
    cout << median(a1, a2,4,6);
}