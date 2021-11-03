// c.(n=5)
// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3
// 1 2
// 1


#include<iostream>
using namespace std;
int main()
 {
     int n;
     cout<<"Enter value of n : ";
     cin>>n;
     for(int i=n+1;i>0;i--)
     {
         for(int j=1;j<i;j++)
         {
             cout<<j<<" ";
         }
         cout<<"\n";

     }
     return 0;
 }


//  OUTPUT:
//  Enter value of n : 5
// 1 2 3 4 5 
// 1 2 3 4   
// 1 2 3     
// 1 2       
// 1         
