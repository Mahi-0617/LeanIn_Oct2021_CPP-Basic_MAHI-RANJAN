// //q4. Write a program to print following pattern:
// a.(n=5)
// A
// B B
// C C C
// D D D D
// E E E E E

#include<iostream>
using namespace std;

 int main()
 {
     int n;
     char c='A';
     cout<<"Enter the value of n : ";
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=i;j++)
         {
             cout<<c<<" ";
         }
         c++;
         cout<<"\n";

     }
     return 0;
 }



//  OUTPUT:
//  Enter the value of n : 5
// A         
// B B       
// C C C     
// D D D D   
// E E E E E