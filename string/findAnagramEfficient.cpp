#include <bits/stdc++.h>
using namespace std;
bool areSame(int arr1[], int arr2[]){
    for (int i = 0; i<256; ++i) {
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}
bool isAnagramEfficient(string &str1, string &str2){
    int arr1[256]={0};
    int arr2[256]={0};
    for(int i = 0; i<str2.length(); ++i){
        arr1[str1[i]]++;
        arr2[str2[i]]++;
    }
    for(int i = str2.length(); i<str1.length(); ++i){
        if(areSame(arr1,arr2)){
            return true;
        }
        arr1[str1[i]]++;
        arr1[str1[i-str2.length()]]--;
    }
    return false;
}
int main(){
    string str1 = "abcdef";
    string str2 = "bce";
    cout << boolalpha << isAnagramEfficient(str1,str2);
}