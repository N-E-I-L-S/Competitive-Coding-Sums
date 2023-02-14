#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0; i<n; i++)
    cin>>arr[i];
    int temp=arr[n-1];
    for(i=n-1; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    for(i=0; i<n; i++)
    cout<<arr[i]<<endl;
}