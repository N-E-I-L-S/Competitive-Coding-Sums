#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], i;
    for(i=0; i<n; i++)
    cin>>arr[i];
    int result=INT_MIN,sum=0;
    
    for(i=0; i<n; i++)
    {
       sum=sum+arr[i];
       if(sum>result)
       result=sum;
       if(sum<0){
        sum=0;
       }
    }
    cout<<result;
}