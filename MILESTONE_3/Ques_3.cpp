//3. Add two matrices and display the output.

#include <iostream>
using namespace std;

int main()
{
    int r, c, a[50][50], b[50][50], sum[50][50], i, j;

    cout << "Enter number of rows: \n";
    cin >> r;

    cout << "Enter number of columns: \n";
    cin >> c;

    cout<<"Enter elements of 1st matrix: ";

    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    cout<<"Enter elements of 2nd matrix: ";
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}

// OUTPUT:
// Enter number of rows: 
// 4
// Enter number of columns: 
// 1
// Enter elements of 1st matrix: Enter element a11 : 54
// Enter element a21 : 98
// Enter element a31 : 0
// Enter element a41 : 43
// Enter elements of 2nd matrix: Enter element b11 : 21
// Enter element b21 : 34
// Enter element b31 : 21
// Enter element b41 : 56

// Sum of two matrix is: 
// 75  
// 132  
// 21
// 99