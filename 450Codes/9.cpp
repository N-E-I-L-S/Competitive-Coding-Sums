#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0; i<n; i++)
    cin>>arr[i];
    int zero=0, one=0, two=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==0)
        zero++;
        else if(arr[i]==1)
        one++;
        else 
        two++;
    }
    for(i=0; i<zero; i++)
    arr[i]=0;
    for(i=zero; i<(zero+one); i++)
    arr[i]=1;
    for(i=(zero+one); i<(zero+one+two); i++)
    arr[i]=2;
    for(i=0; i<n; i++)
    cout<<arr[i]<<endl;
}