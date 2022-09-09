#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long int sum=0, power=1;
        for(int i=0;i<n; --i){
            int binary = s[i]-'0';
            sum = sum + (binary*power);
            power = power*2;
        }
        cout<< sum << endl;

    }
}