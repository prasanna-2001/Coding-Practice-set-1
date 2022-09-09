//c++ strings

#include<bits/stdc++.h>
using namespace std;
int main(){

    //taking inpuut 
    // string str1;
    // cin >> str1;
    // string str2;
    // cin >>str2;
    
    // //string result = str1+ "" +str2;
    // //cout << result << endl;

    // //==operATor
    // if(str1==str2){
    //     cout << "equal";
    // }
    // else{
    //     cout<< "not equal";
    // }



    // to access the specific char of string 
    //str[index]

    //to print a string one by one ie char by char
    // for(int i=0; i<str1.size();++i){
    //     cout<< str1[i] << endl;
    // }


    // //to take various strings at once
    // string str1, str2, str3;
    // cin >> str1 >> str2 >> str3;
    // cout << str1 << " " << str2 << " " << str3 <<endl;

   
    // to get a line  as inpu tin one string
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
       string str;
       getline(cin, str);
       cout << str << endl;
    }

    
}
