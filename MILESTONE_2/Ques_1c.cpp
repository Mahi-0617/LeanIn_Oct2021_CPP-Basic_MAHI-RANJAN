// c:
// (Ex: n=5)
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5


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
             cout<<j<<" ";
         }
         cout<<"\n";

     }
     return 0;
 }


//  OUTPUT:
//  Enter the value of n : 5
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5