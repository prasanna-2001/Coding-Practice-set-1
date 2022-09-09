/*costraints
1<=l<=10^9
1<=b<=10^9

input formatt :
2 spaces separated integer l and b.

output Format 
single number which is area of rectangle

sample intput
3  4
sample output
12
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int l,b; //the constrsind are given in  the form of 10^9 ==> the result will be 10^9*10*9 ==> 10^18 so we have to dea in long long int
    cin>> l >> b ;
    cout<<l*b;
}