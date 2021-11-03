// h.(n=5)
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 

#include<iostream>
using namespace std;
int main()
 {
     int n;
     cout<<"Enter value of n : " ;
     cin>>n;
     for(int i=n;i>=1;i--)
     {
          for(int m=n-i;m>0;m--)
            cout<<" ";
        for(int j=i;j>0;j--)
            cout<<"*";    

         cout<<"\n";
     }

     return 0;
 }



//  OUTPUT:
//  Enter value of n : 5
// *****
//  ****
//   ***
//    **
//     *