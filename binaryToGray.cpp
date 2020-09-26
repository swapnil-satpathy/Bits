#include <bits/stdc++.h>
using namespace std;

int binary_to_gray(int n){
    return n^(n>>1);
}

int main(){
    int n;
    cin>>n;
    cout<<binary_to_gray(n)<<endl;

    return 0;
}