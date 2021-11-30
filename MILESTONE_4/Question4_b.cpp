// 4_b. Selection Sort

#include <iostream>
using namespace std;

int Selection_sort(int arr[],int n);
int main()
{
    int i,x,n;
    cout<<"Enter The Size Of Array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of Array \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Selection_sort(arr,n);
    return 0;
}

int Selection_sort(int arr[],int n)
{
    int i,j,temp,min;
    
    for(i=0;i<n-1;i++)
    {
     min=i;
        for(j=i+1;j<n;j++)
        {
         if(arr[j]<arr[min])
         {
          min=j;
         }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }
    
      cout<<"\nSORTED ARRAY\n";
   
      for(i=0;i<n;i++) 
     {
        cout<<arr[i]<<" ";
     }

}


// OUTPUT:
// Enter The Size Of Array = 6
// Enter The Elements Of Array 
// 54 66 0 122 56 -98 

// SORTED ARRAY       
// -98 0 54 56 66 122 