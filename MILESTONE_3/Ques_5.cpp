//5. Reverse an array and display the output

#include<iostream>
using namespace std;
int main()
{
    int arr[100], i,n;
    cout<<"Enter Array Elements: ";
    cin>>n;
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=(n-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}


// output:
// Enter Array Elements: 10
// 9
// 8
// 7
// 6
// 5
// 4
// 3
// 2
// 1
// 0

// The Original Array is:        
// 9 8 7 6 5 4 3 2 1 0 

// The Reverse of Given Array is:
// 0 1 2 3 4 5 6 7 8 9