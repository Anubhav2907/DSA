#include <bits/stdc++.h>
using namespace std;
void find(int arr[4][4], int k){
    int i =0;
    int j = 3;
    while(i<4 && j>0){
        if(arr[i][j]==k){
            cout << i << " " << j << endl;
            return;
        }
        else if(arr[i][j]>k){
            j--;
        }
        else{
            i++;
        }
    }
}
int main()
{	
    int arr[4][4] = {{10, 20, 30, 40},
    			   {15, 25, 35, 45},
    			   {27, 29, 35, 45},
    			   {32, 33, 39, 50}};
			   
	int x = 29;	   

	find(arr, x);

	return 0;
}