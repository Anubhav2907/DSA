#include <bits/stdc++.h>
using namespace std;
int matrixBeautiful(int arr[4][4]){
    int rowSum=0;
    int colSum=0;
    int total=0;
    int res=INT_MIN;
    for(int i=0;i<4;i++){
        rowSum=0;
        colSum=0;
        for(int j=0;j<4;j++){
            rowSum+=arr[i][j];
            colSum+=arr[j][i];
        }
        res = max(res,max(rowSum,colSum));
        total+=rowSum;
    }
    return ((4*res)-total);
}