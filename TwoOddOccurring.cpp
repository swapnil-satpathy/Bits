#include <bits/stdc++.h>
using namespace std;



int main(){

    int n;
    cin>>n;
    int *arr=new int[n];
    int xori=0;

    // Finding the XOR of all the numbers
    for(int i=0;i<n;i++){
        cin>>arr[i];
        xori=xori^arr[i];
    }
    int res1=0;
    int res2=0;

    // Getting the rightmost set bit 
    int right_most_set_bit=xori& ~(xori-1);


    // Dividing the entire array into two sets based on this last set bit....

    for(int i=0;i<n;i++){
        if((arr[i] &right_most_set_bit)!=0)
                res1=res1^arr[i];
        else
        {
            res2=res2^arr[i];
        }
        
    }



    cout<<res1<<" "<<res2<<endl;


    return 0;
}