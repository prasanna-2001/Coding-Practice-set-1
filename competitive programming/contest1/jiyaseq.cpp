#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, last, temp;
    long long int prod = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; ++i){
            int num;
            cin >> num;
            prod=prod*num;
        }
        temp=prod%10;
        if(temp==2 ||temp == 3 || temp == 5){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
}