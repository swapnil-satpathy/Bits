#include <bits/stdc++.h>
using namespace std;
//counter represents the 2^n subsets...
//We use the set bits in the binary representation to find the element of the subset


void printpowerset(string str){
    int n=str.length();
    int powsize=pow(2,n);
    for(int counter=0; counter<powsize;counter++){
        for(int j=0;j<n;j++){
            if((counter&(1<<j))!=0)
                cout<<str[j];
        }
        cout<<endl;
    }
}

int main(){
    string str;
    cin>>str;
    printpowerset(str);


    return 0;
}