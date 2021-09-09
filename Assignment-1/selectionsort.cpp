/* Selection Sort Algorithm */
#include <stdio.h>
int main()
{
    int A[] = {6, 2, 11, 7, 5};
    int n = 5;
    int index = 0, temp = 0, i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[index])
                index = j;
        }
        temp = A[i];
        A[i] = A[index];
        A[index] = temp;
    }
    printf("\nafter selection sort\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}
