#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& arr) {
        int a = arr.size();
        int b = arr[0].size();
        bool col = false;
        bool row = false;
        for (int i = 0; i < a; i++) {
            if (arr[i][0] == 0) {
                col = true;
                break;
            } 
        }
        for (int i = 0; i < arr[0].size(); i++) {
            if (arr[0][i] == 0) {
                row = true;
                break;
            } 
        }
        for (int i = 1; i < arr.size(); i++) {
            for (int j = 1; j < arr[0].size(); j++) 
                if (arr[i][j] == 0) {
                    arr[i][0] = 0;
                    arr[0][j] = 0;
                }
        }
        for (int i = 1; i < arr.size(); i++) {
           for (int j = 1; j < arr[0].size(); j++) 
               if (arr[i][0] == 0 || arr[0][j] == 0)
                   arr[i][j] = 0;
        }
        if (col==true) {
            for (int i = 0; i < arr.size(); i++) 
                arr[i][0] = 0;
        }
        if (row==true) {
            for (int i = 0; i < arr[0].size(); i++) 
                arr[0][i] = 0;
        }
}