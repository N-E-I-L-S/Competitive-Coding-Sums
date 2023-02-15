#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], i;
    for(i=0; i<n; i++)
    cin>>arr[i];
    int calcsum = ((n-1)*(n))/2;
    int realsum=0;
    for(i=0; i<n; i++)
    realsum= realsum +arr[i];
    int duplicate = realsum-calcsum;
    cout<<duplicate;
}