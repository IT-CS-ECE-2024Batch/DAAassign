#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int x);

int main()
{
    int arr[] = {2, 4, 6, 9, 11, 12, 15, 18, 21};
    int x;
    cout << "Enter a number" << endl;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
    if (result == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "Element is present at index " << result << endl;
    }
    cout << "Program developed by ------- and Scholar No.: 20U0----" << endl;
    return 0;
}

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
