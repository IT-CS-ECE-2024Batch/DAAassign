#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x);

int main()
{
    int arr[] = {2, 4, 6, 9, 11, 12, 15, 18, 21};
    int x;
    cout << "Enter a number" << endl;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
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

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            l = mid + 1;
        }

        else
        {
            r = mid - 1;
        }
    }
    return -1;
}