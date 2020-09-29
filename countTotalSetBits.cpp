// You are given a number N. Find the total count of set bits for all numbers from 1 to N(inclusive)


// 0(n) solution

#include <bits/stdc++.h>
using namespace std;




int countSetBits(int n)
{
    // Your logic here
    int arr[n];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        if(i%2==0)
            arr[i]=arr[i/2];
        else
            arr[i]=arr[i/2]+1;
    }
    
    int sum=0;
    for(int i=0;i<=n;i++)
        sum+=arr[i];
    return sum;
   
    
}

int main(){

	int n;
	cin>>n;
	cout<<countSetBits(n)<<endl;
	return 0;
}

