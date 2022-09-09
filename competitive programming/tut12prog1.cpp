//  hashing (precomputataion techniques)

// question ; given  arrray of N integers . Give    Qquerries ,and in each querry given a number X , orint the count of that number ...
/*
constraints 
1<=N<=1E5
1<=a[i]<=1E7
1<=Q<=10^5
*/
#include<bits/stdc++.h>
using namespace std;

//our basic approach
// int main(){

//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; ++i){
//         cin>>a[i];
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int x;
//         cin>>x;
//         int ct=0;
//         for(int i=0; i<n; ++i){
//             if(a[i]==x){
//                 ct++;
//             }
//         }
//         cout << ct << endl;
//     }

// }

// here the time complexity is o[n*n] = 10^10







//so the optimised code is
//in hashing techniquey we make a hash array
const int N=1e7+10;
int hsh[N];
int main(){
    int n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        
        cout << hsh[x] << endl;
    }

}