// i. (n=5)
// 	       *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include<iostream>
using namespace std;
int main()
 {
     int i,r,s,n;
     n-(i-1) == r;
     n+(i-1) == s;
     cout<<"Enter value of n : ";
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=2*n;j++)
            { 
              if(j>=n-(i-1) && j<=n+(i-1))
               cout<<"*";
              else
              cout<<" "; 
            } 
         r--;
         s++;   
         cout<<"\n";
     }

     return 0;
 }


//  OUTPUT:
//  Enter value of n : 5
//     *     
//    ***    
//   *****   
//  *******  
// *********


 