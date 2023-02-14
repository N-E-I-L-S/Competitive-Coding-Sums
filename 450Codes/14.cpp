#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], i;
    int sum=0;
    for(i=0; i<n; i++)
    {
    cin>>arr[i];
    sum=sum+arr[i];
    }
    int k;
    cin>>k;
    int avg = sum/n;
    for(i=0; i<n; i++)
    {
        if(arr[i]<avg)
            arr[i]=arr[i]+k;
        else
        arr[i]=arr[i]-k;
    }
    for(i=0; i<n; i++)
    {
    cout<<arr[i]<<endl;
    }

}