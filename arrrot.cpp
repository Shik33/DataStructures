#include <iostream>
#include <stdlib.h>
using namespace std;

void rotation(int arr[], int n)
{
	int temp, i;

	temp = arr[0];
	i = 0;
	while (i < n - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = temp;
}

void rotationford(int a[], int n, int d)
{
	int i;

	i = 0;
	while (i < d)
	{
		rotation(a, n);
		i++;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i;

	i = 0;
	rotationford(arr, n, 2);
	while (i < n)
	{
		cout << arr[i] << "\n";
		i++;
	}
	return (0);
}