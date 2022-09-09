// to print the reverse of the string and to fing its palindrome or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    string str_rev;
    for(int i=str.size()-1; i>=0; --i){
        str_rev.push_back(str[i]);
    }
    cout << str_rev ;
    if(str == str_rev){
        cout <<"the dtring is a palindrome ";
    }
    else{
        cout << " not a palindrome";
    }
}