#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    int min = arr[0], max = 0;
    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (arr[i] - min > max)
            max = arr[i] - min;
    }
    cout<<min<<" "<<max;
}