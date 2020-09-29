// 0(logN)
// Auxiliary Space : 0(1)

//  Formula to be used: solve(n)=x*(1<<(x-1)) + (n-(1<<x)+1) + solve(n-(1<<x))

#include <bits/stdc++.h>
using namespace std;

int largestPowerofTwo(int n){
	int x=0;
	while((1<<x)<=n)
		x++;
	return x-1;
}

int solve(int n){
	if(n==0)
		return 0;
	int x=largestPowerofTwo(n);
	int bitstill2raisex=x*(1<<(x-1));
	int msbafter2raisex=(n-(1<<x)+1);
	int ans=bitstill2raisex+msbafter2raisex+solve(n-(1<<x));
	return ans;
}


int main(){

	int n;
	cin>>n;
	cout<<solve(n)<<endl;

	return 0;
}