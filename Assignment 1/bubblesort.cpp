/* Bubble Sort Algorithm */
#include <stdio.h>
void swap(int x, int y, int A[])
{
    int temp = A[x];
    A[x] = A[y];
    A[y] = temp;
}
int main()
{
    int A[] = {6, 2, 11, 7, 5};
    int n = 5;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
    for (int pass = 1; pass <= n - 1; ++pass) // Making passes through array
    {
        for (int i = 0; i <= n - 2; ++i)
        {
            if (A[i] > A[i + 1])   // If adjacent elements are in wrong order
                swap(i, i + 1, A); // Swap them
        }
    }
    //swap function : Exchange elements from array A at position x,y
    printf("\nafter selection sort\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}