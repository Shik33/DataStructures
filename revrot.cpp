#include <iostream>
#include<stdlib.h>
using namespace std;

void rev(int a[], int s, int e)
{
	int temp;
	
	temp = a[s];
	a[s]=a[e];
	a[e]=temp;
	s++;
	e--;
}

void	revrot(int a[], int d, int n)
{
	if (d == 0)
		return;
	rev(a, 0, d - 1);
	rev(a, d, n - 1);
	rev(a, 0, n - 1);
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int n;
	int d;

	n = sizeof(arr) / sizeof(arr[0]); 
	cin>>d;
	revrot(arr,d,n);
	for(int i=0;i < n; i++)
		cout<<arr[i]<<"\n";
	return 0;
}
