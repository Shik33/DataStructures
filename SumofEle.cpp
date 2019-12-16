#include <iostream>
using namespace std;

int NoofSums(int arr[], int n, int x)
{
    int i;
    int l;
    int r;
    int p;
    
    p=0;
    for (i=0; i<n-1; i++) 
        if (arr[i] > arr[i+1]) 
            break; 
    l = (i+1)%n;  
    r = i;        
 
    while (l != r) 
    { 
  
         if (arr[l] + arr[r] == x) 
         {
         	p++;
         	if(l==(r-1+n)%n){
         		return p;
         	}
				
   
        else if (arr[l] + arr[r] < x) 
              l = (l + 1)%n; 
         else
              r = (n + r - 1)%n; 
    } 
    return p;
} 
}
int main()
{
	int arr[]={10,2,11, 1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x = 12;
	
	cout<<NoofSums(arr, n, x);
	return 0;
}
