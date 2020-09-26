#include <bits/stdc++.h>
using namespace std;

int gray_to_binary(int n){
    int inv = 0; 
  
    // Taking xor until n becomes zero 
    for (; n; n = n >> 1) 
        inv ^= n; 
  
    return inv; 
}

int main(){
    int n;
    cin>>n;
    cout<<gray_to_binary(n)<<endl;

    return 0;
}