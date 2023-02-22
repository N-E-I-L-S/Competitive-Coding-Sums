#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][2], i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < 2; j++)
            cin >> arr[i][j];

    int newarr[n][2];

    for (i = 0; i < n; i++)
    {
        newarr[i][0] = -1;
        newarr[i][1] = -1;
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i + 1][0] < arr[i][1])
        {
            newarr[i][0] = arr[i][0];
            newarr[i][1] = arr[i + 1][1];

            arr[i + 1][0] = -1;
            arr[i + 1][1] = -1;
        }
        else
        {
            newarr[i][0] = arr[i][0];
            newarr[i][1] = arr[i][1];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (newarr[i][0] != -1 && newarr[i][1] != -1)
        {
            cout << newarr[i][0] << " ";
            cout << newarr[i][1] << endl;
        }
    }
}