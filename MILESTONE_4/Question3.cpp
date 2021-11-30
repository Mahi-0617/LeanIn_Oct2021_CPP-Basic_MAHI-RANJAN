// 3. WAP using function to Insert a no. at a given position in an array

#include <iostream>
using namespace std;

int* insertX(int n, int arr[],int x, int pos)
{
    int i;
    n++;

    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = x;
    return arr;
}

int main()
{
    int arr[100];
    int i, x, pos,n;

     cout<<"Enter the number of elements in array:  ";
     cin>>n;    

    cout<<"Enter the elements of the array  ";
    for (i = 0; i<n; i++)
        cin>>arr[i];

    cout<<"The original array is:  ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout<<"Enter the element to be inserted:  ";
    cin>>x;

    cout<<"Enter the position at which element is to be inserted:  ";
    cin>>pos;

    insertX(n, arr, x, pos);

    cout<<"The updated array is:  ";
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}


// OUTPUT:
// Enter the number of elements in array:  6
// Enter the elements of the array  43 55 11 7 10 0
// The original array is:  43 55 11 7 10 0 
// Enter the element to be inserted:  123  
// Enter the position at which element is to be inserted:  3
// The updated array is:  43 55 123 11 7 10 0 