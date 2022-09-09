// precomputation techique
//HASHING


//question : given T testcasesvand in each test case number N. print factoria; for eac test case N....

// constrains
//1. 1<= T <= 10^5
//2. 1<= T <= 10^5



// for this code the time complexity is 10^10 and it will give  the time limit exceeded errror
//o[T*N]=O[N^2](//AS T==N) OLDC COMPLEXITY
//10^5*10^5=10^10

//multiply as the loops are embedded

// #include<bits/stdc++.h>
// using namespace std;
// const int M = 1e9+7 ;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n ;
//         cin >> n;
//         long long int fact = 1;
//         for(int i=2; i<=n; ++i){
//             fact = (fact*i)%M;
//         }
//         cout<<fact<<endl;
//     }

// }




//NEW COMPLEXITY  (addotion as the loops are distinct)
//0[N]+O[T]====O[N]+O[N]===O[N]
//10^5+10^5=2*10^5~ 10^5
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7 ;
const int N = 1e5+10;
long long int fact[N];
int main(){
    fact[0]=fact[1]=1;
    for(int i=2; i<N;++i){
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        cout<<fact[n]<<endl;
    }

}
// in this program we i fq+aced overloading after the test case value of 59...




