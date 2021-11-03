// Q.1 Write a program to print following pattern: 

// a: (Ex: n=5)
// *****
// *****
// *****
// *****
// *****

#include<iostream>
using namespace std;

int main()
 {
     int n;
     cout<<"Enter the value of n : ";
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=n;j++)
         {
             cout<<"*";
         }
         cout<<"\n";

     }
     return 0;
 }




// OUTPUT: 
// Enter the value of n : 5
// *****
// *****
// *****
// *****
// *****