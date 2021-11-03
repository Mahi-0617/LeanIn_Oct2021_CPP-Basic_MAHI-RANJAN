// d.(n=5)
// 1
// 2 3
// 4 5 6
// 7 8 9 10


#include<iostream>
using namespace std;
int main()
 {
     int n;
     int m =1;
     cout<<"Enter value of n : ";
     cin>>n;
     for(int i=1;i<=n-1;i++)
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
// 1        
// 2 3      
// 4 5 6    
// 7 8 9 10 