#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    i = 0;
    int jump = 0, flag = 0;
    while (jump < n)
    {
        jump = jump + arr[jump];
        if (arr[jump] == 0)
        {
            jump--;
        }
        i++;
        if (i > n)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << -1;
    else
    {
        if (jump == n)
            cout << i - 1;
        else
            cout << i;
    }
}