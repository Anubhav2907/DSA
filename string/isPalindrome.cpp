#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    int low = 0;
    int high = str.length()-1;
    while(low<=high){
        if(str[low]==str[high]){
            low++;
            high--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    string str = "abcbad";
    cout << boolalpha <<isPalindrome(str) << endl;
}