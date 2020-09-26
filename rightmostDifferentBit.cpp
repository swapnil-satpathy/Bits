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

int different(int n,int m){
    int xori=n^m;
    return calculate(xori);
}

int main(){

    int n;
    cin>>n;
    int m;
    cin>>m;
    cout<<different(n,m)<<endl;

    return 0;
}