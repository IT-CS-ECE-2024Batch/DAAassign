/* Merge Sort Algorithm */
#include <iostream>
using namespace std;

void printArray(int *Arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
}
void merge(int A[], int mid, int low, int high)
{
    int i, j, k;
    int B[high + 1];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void MS(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        int mid = (low + high) / 2;
        MS(A, low, mid);
        MS(A, mid + 1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    cout << "Program Developed by Tanav Singh Bajaj /n Scholar No. : 20U03037.\n";
    int n;
    cout << "Enter No. of Elements : ";
    cin >> n;
    int A[n];
    cout << "Enter Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Given Array is : ";
    printArray(A, n);
    cout << endl;

    MS(A, 0, n - 1);
    cout << endl;
    cout << "Sorted Array is : ";

    printArray(A, n);
    cout << endl;
    return 0;
}
