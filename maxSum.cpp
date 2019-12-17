#include <iostream>
using namespace std;

int maxSum(int arr[], int n)
{
	int res;
	int i;
	int j;
	int sum;
	int x;
	
	x=0;
	j=0;
	i=0;
	res = 0;
	while(i<n)
	{
		while (j<n)
		{
			x= (i+j) % n;
			sum = sum + j * arr[x];
			j++;
		}
		
		res = max(res,sum);
		i++;
	}
	return (res);
}
int main() {
	 int arr[] = {8, 3, 1, 2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << maxSum(arr, n) << endl; 
    return 0;
	return 0;
}
