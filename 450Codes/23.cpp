#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], i;
    for(i=0; i<n; i++)
    cin>>arr[i];
    int count=0;
    int k;
    cin>>k;
    int hash[n];
    for(i=0; i<n; i++)
    {
     hash[arr[i]-1]= 1;
    }
    for(i=0; i<n; i++)
    {
        if(hash[k-arr[i]-1]==1)
        {
        hash[arr[i]-1]=-1;  
        count++;
        }
    }
    cout<<count;
}