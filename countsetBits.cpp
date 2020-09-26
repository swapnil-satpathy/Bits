// Brian Kerningham Algorithm...
//Time Complexity --> 0( No of set Bits)

/*
Whenever one does a n & (n-1), then all the bits after the LSB waala first set bit including that one is converted to zero;;;
*/

#include <bits/stdc++.h>
using namespace std;

int count(int n){
    int c=0;
    while(n>0){
        n=n&(n-1);
        c++;
    }
    return c;
}
int main(){
    int n;
    cin>>n;

    cout<<count(n)<<endl;
    return 0;
}