//precision errors, calulation order 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"7/2";      (3)
    //cout<<"7/2".0;        (3.5)
    // cout<<'c'+1;     (100) //her the whole calculation is odone in the ASCII VAKUES
    //double<float<long long int<long int<int<char
    //the colculation is done in the higher data type. agar koi bhi elemnt is innhigher data type thrn the whole calculatoion ids donee inhigher datatype


    //pehle calculation hogi and then value store hogi so even kabhi agr value ka datatype double bhi ho to bhi agar elements int me ho to calculation int me hoga and then wo value store hogi double me but wo int hi h===rahegi.
    //eg double a = 3/2;
    // is me value output hioga 1 nd wo baad me douboe a me store hoga then agar datatyoe double bhi ho fir bhi the vkue stored hogi wo int hogi

    //presedence
    
    // OVERFLOW CONDITION
    // RANGES 
    // 10^-9<int<10^9
    // 10^-12<long int<10^12
    // 10^-18<long long int<10^18
    //use long or long long instead of the double because double is not precise where as the long long int is more precise
    



}