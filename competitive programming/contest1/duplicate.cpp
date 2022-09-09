#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n,k;
    vector<vector<string>> v;
    cin>>n;
    cin>>k;
    for(int i=0; i<n;i++){
        for(int j=0; j<k; j++){
            string s;
            cin>>s;
            v[i].push_back(s);
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<k; j++){
            cout<<v[i][j];
        }
    }
     
     
}