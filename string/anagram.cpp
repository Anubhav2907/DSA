#include <bits/stdc++.h>
using namespace std;
bool anagram(string str1, string str2){
    int arr[256]={0};
    for (int i = 0; i<str1.length(); ++i) {
        arr[str1[i]]++;
    }
    for (int i = 0; i<str1.length(); ++i) {
        arr[str2[i]]--;
    }
    for(auto x:arr){
        if(x!=0){
            return false;
        }
    }
    return true;
}
int main(){
    cout << boolalpha << anagram("abcdef","deabc");
}