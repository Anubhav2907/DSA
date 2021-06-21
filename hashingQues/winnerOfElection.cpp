#include <bits/stdc++.h>
using namespace std;
vector<string> winner(string arr[], int n){
unordered_map<string, int> m;
        vector<string> v;
        int max1=0;
        string output;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            if(max1 < m[arr[i]]){
                max1 = m[arr[i]];
                output = arr[i];
            }
            if(max1==m[arr[i]]){
                output = min(arr[i],output);
            }
        }
        v.push_back(output);
        v.push_back(to_string(max1));
        return v;
}
int main(){
    string arr[] = {"john","johnny","jackie","johnny","john","jackie","jamie","jamie","john","johnny","jamie","johnny","john"};
    winner(arr,13);
}