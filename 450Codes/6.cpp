#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    cin>>arr[i];
    int f=0,l=n-1, temp=0;
    while(f<l)
    {
        temp=arr[f];
        arr[f]=arr[l];
        arr[l]=temp;
        f++,l--;
    }
    for(i=0; i<n; i++)
    cout<<arr[i]<<endl;
}