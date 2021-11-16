// Q9. Write a program to implement linear search using function.



#include <iostream>
#define MAX_SIZE 10

using namespace std;

void linear_search(int[], int);

int main() 
{
    int arr_search[MAX_SIZE], i, element;

    cout << "\nEnter " << MAX_SIZE << " Elements for Searching : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_search[i];

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_search[i];
    }

    cout << "\nEnter Element to Search : ";
    cin>>element;
    linear_search(arr_search, element);
}

void linear_search(int fn_arr[], int element) 
{
    int i;
    for (i = 0; i < MAX_SIZE; i++) 
    {

        if (fn_arr[i] == element) 
        {
            cout << "\nLinear Search : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

    if (i == MAX_SIZE)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}


// OUTPUT:
// Enter 10 Elements for Searching : 
// 54
// 98
// 7
// 4
// 111
// 2
// -544
// 0
// 5
// 21

// Your Data   :   54      98      7       4       111     2       -544    0       5       21
// Enter Element to Search : 0

// Linear Search : Element  : 0 : Found :  Position : 8.