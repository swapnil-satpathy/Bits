#include <bits/stdc++.h>
using namespace std;


// Here the first bit means the LSB(Least Significant Bit)
bool isset(int n,int k){
    return (n&(1<<(k-1)));
}

int main(){
    int n;
    int k;
    cin>>n>>k;
    cout<<isset(n,k)<<endl;

    return 0;
}