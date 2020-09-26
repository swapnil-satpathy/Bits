#include <bits/stdc++.h>
using namespace std;

int calculate(int n){
    int i=0;
    while(n>0){
        i++;
        if((n&1)==1)
            break;
        n=n>>1;
    }
    return i;
}

int main(){

    int n;
    cin>>n;
    cout<<calculate(n)<<endl;

    return 0;
}