//6. Write a program to find size of int, float, double and char in your system.

#include<iostream>
using namespace std;
int main()
{
   cout << "Size of int : " << sizeof(int) << "\n";
   cout << "Size of float : " << sizeof(float) << "\n";
   cout << "Size of double : " << sizeof(double) << "\n";
   cout << "Size of char : " << sizeof(char) << "\n";
   return 0;
}


// OUTPUT:
// Size of int : 4   
// Size of float : 4 
// Size of double : 8
// Size of char : 1