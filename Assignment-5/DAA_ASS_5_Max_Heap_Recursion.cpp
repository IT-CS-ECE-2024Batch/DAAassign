#include <iostream>

using namespace std;
void print_array(int arr[], int n)
{
	int i = 0;
	cout<<"\n";
	for (i = 0; i < n; i++)
		cout<<arr[i] << " ";
	cout<<"\n\n";
}

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void max_heapify(int arr[], int n, int i)
{

	int largest_idx = i;
	int left_idx = 2 * i + 1;
	int right_idx = 2 * i + 2;

	if (left_idx < n && arr[largest_idx] < arr[left_idx])
		largest_idx = left_idx;
	if (right_idx < n && arr[largest_idx] < arr[right_idx])
		largest_idx = right_idx;

	if (largest_idx != i)
	{
		swap(&arr[i], &arr[largest_idx]);
		max_heapify(arr, n, largest_idx);
	}
}

int main()
{
	int i = 0;
	int n = 0;
	int *a = NULL;
	cout<<"Enter number of elements : ";
	cin>>n;
	a = (int *)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		cout<<"Enter element ["<<(i+1)<<"] : ";
		cin>> a[i];
	}
	cout<<"given array\n";
	print_array(a, n);

	for (i = n / 2; i >= 0; i--)
	{
		max_heapify(a, n, i);
	}
	cout<<"heapified array\n";
	print_array(a, n);

	for (i = n - 1; i >= 0; i--)
	{
		swap(&a[0], &a[i]);
		max_heapify(a, i, 0);
	}
	cout<<"sorted array\n";
	print_array(a, n);

	cout<<"\n Program by Umang Bhalla 20U03031\n";

	return 0;
}
