// j.(n=5)
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 

#include<iostream>
using namespace std;
int main()
 {
     int n;
     char m='A';
     cout<<"Enter value of n : ";
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=i;j++)
         {
             cout<<m<<" ";
             m++;
         }
         cout<<"\n";

     }
     return 0;
 }


//  OUTPUT:
//  Enter value of n : 5
// A         
// B C       
// D E F     
// G H I J   
// K L M N O