// 4_c. Insertion Sort

#include<iostream>
using namespace std;

void display(int *array, int size) 
{
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void insertionSort(int *array, int size) 
{
   int key, j;
   for(int i = 1; i<size; i++) 
   {
      key = array[i];
      j = i;
      while(j > 0 && array[j-1]>key) 
      {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;
   }
}
int main() 
{
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n]; 
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) 
   {
      cin >> arr[i];
   }
   insertionSort(arr, n);
   cout << "Sorted Array: ";
   display(arr, n);
}


// OUTPUT:
// Enter the number of elements: 6
// Enter elements:
// 54 -99 122 4 33 1 
// Sorted Array: -99 1 4 33 54 122 