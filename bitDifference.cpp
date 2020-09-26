// You are given two numbers A and B. 
// The task is to count the number of bits needed to be flipped to convert A to B.


#include <bits/stdc++.h>
using namespace std;

int countsetbits(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
int countBitsFlip(int a, int b){
    
    // Your logic here
    return countsetbits(a^b);
    
    
}

int main(){

	int a,b;
	cin>>a>>b;
	cout<<countBitsFlip(a,b)<<endl;
	return 0;
}