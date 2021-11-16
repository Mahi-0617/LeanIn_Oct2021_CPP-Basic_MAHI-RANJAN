//2. Display sum of elements in an array.

#include<iostream>
using namespace std;
int main ()
{
    int arr[50], n, i, sum = 0;
    cout <<"Enter the size of the array : ";
    cin >> n;
    cout <<"\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];

    }
    cout <<"\nSum of array elements : " << sum;
    return 0;
}


// OUTPUT:
// Enter the size of the array : 10

// Enter the elements of the array : 23
// 32
// 66
// 0
// -100
// 53
// 21
// 66
// 8
// 44

// Sum of array elements : 213