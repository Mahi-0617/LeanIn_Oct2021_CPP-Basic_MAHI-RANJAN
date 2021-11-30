// 4_a. Bubble Sort

#include <iostream>
using namespace std;
 
void BubbleSort (int arr[], int n)
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n-i-1; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}
	}	
}	
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of elements in the array to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	BubbleSort(arr, n);
 
	cout<<"\nSorted Array ";
	for (i = 0; i < n; i++)
        cout<<" "<<arr[i];
 
	return 0;
}


// OUTPUT:
// Enter the number of elements in the array to be sorted: 6
// Enter element 1: 12
// Enter element 2: 98
// Enter element 3: -1777
// Enter element 4: 87
// Enter element 5: 4
// Enter element 6: 0

// Sorted Array  -1777 0 4 12 87 98