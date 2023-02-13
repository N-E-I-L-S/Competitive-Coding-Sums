#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0; i<n; i++)
    cin>>arr[i];
    int f=0,l=n-1,temp=0;
    while(f<l)
    {
        if(arr[f]<0)
        f++;
        else if(arr[l]>=0)
        l--;
        else
        {
            temp=arr[f];
            arr[f]=arr[l];
            arr[l]=temp;
        }
    }
    for(i=0; i<n; i++)
    cout<<arr[i]<<endl;
}