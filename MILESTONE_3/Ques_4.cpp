//4. Display trasnpose of a matrix.

#include <iostream>
using namespace std;

int main() 
{
   int a[10][10], transpose[10][10], r, c, i, j;

   cout << "Enter rows and columns of matrix: ";
   cin >> r >> c;

   cout << "\nEnter elements of matrix: " << endl;
   for (int i = 0; i < r; ++i) 
   {
      for (int j = 0; j < c; ++j) 
      {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < r; ++i) 
   {
      for (int j = 0; j < c; ++j) 
      {
         cout << " " << a[i][j];
         if (j == c - 1)
            cout << endl << endl;
      }
   }
   for (int i = 0; i < r; ++i)
      for (int j = 0; j < c; ++j) 
      {
         transpose[j][i] = a[i][j];
      }
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < c; ++i)
      for (int j = 0; j < r; ++j) 
      {
         cout << " " << transpose[i][j];
         if (j == r - 1)
            cout << endl << endl;
      }

   return 0;
}

// OUTPUT:
// Enter rows and columns of matrix: 4
// 2

// Enter elements of matrix: 
// Enter element a11: 54     
// Enter element a12: 99
// Enter element a21: 0
// Enter element a22: 32
// Enter element a31: 61
// Enter element a32: 85
// Enter element a41: 23
// Enter element a42: 63

// Entered Matrix: 
//  54 99

//  0 32

//  61 85

//  23 63


// Transpose of Matrix:
//  54 0 61 23

//  99 32 85 63