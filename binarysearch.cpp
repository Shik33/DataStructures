#include <iostream>
using namespace std;

int binarysearch(int arr[], int l, int h, int k) 
{ 
	int m;

    if (l > h) 
    	return -1; 
    m = (l+h)/2; 
    if (arr[m] == k) 
    return m;
    if (arr[l] <= arr[m])
    { 
        if (k >= arr[l] && k <= arr[m]) 
        return binarysearch(arr, l, m - 1, k); 
        
        return binarysearch(arr, m+1, h, k); 
    } 
  
    if (k >= arr[m] && k <= arr[h]) 
        return binarysearch(arr, m+1, h, k); 
  
    return binarysearch(arr, l, m-1, k); 
} 
  
int main() 
{ 
    int arr[] = {10,12,21,32,32,1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 32; 
    int i = binarysearch(arr, 0, n-1, k); 
  
    if (i != -1) 
    cout << "Index: " << i << endl; 
    else
    cout << "Key not found"; 
}
