//8. Print following patterns :
// a. n=5
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include <iostream>

using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows" << endl;
    cin>>rows;
    for(int i=rows; i>=1;  i--)
    {
            for(int j=i; j<=rows; j++)
            {
                cout<<" ";
            }
            for(int j=1; j<=(2*i-1); j++)
            {
                cout<<"*";
                  
            }
            cout<<"\n";
    }

    return 0;
}

// OUTPUT 
// Enter the number of rows
// 5
//  *********
//   ******* 
//    *****  
//     ***   
//      * 




b. n=6
	       1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 


#include <iostream>
using namespace std;

int main()
{
    int rows, coef = 1,i,j;

    cout<<"Enter number of rows: ";
    cin>>rows;

    for(i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }

    return 0;
}


// OUTPUT:
// Enter number of rows: 5
//           1           
//         1   1         
//       1   2   1       
//     1   3   3   1     
//   1   4   6   4   1 






// c. n=5
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****


#include<iostream>
using namespace std;

int main()
{
  int i,j,k,r;
  cout<<"Enter no. of rows: ";
  cin>>r;
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=r-i;j++)
    cout<<"*";
        for(k=1;k<=2*i-1;k++)
        {
        	if(k==1 || k==2*i-1)
        	cout<<"*";
        	else
        	cout<<" ";
        }
      for(j=1;j<=r-i;j++)
      cout<<"*";
    cout<<"\n";
  }
    for(i=r;i>=1;i--)
  {
    for(j=1;j<=r-i;j++)
    cout<<"*";
        for(k=1;k<=2*i-1;k++)
        {
        	if(k==1 || k==2*i-1)
        	cout<<"*";
        	else
        	cout<<" ";
        }
      for(j=1;j<=r-i;j++)
      cout<<"*";
    cout<<"\n";
  }
  return 0;	
  }


//   OUTPUT:
//   Enter no. of rows: 5
// *********
// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****
// *********







// d. n=5
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *


#include<iostream>
using namespace std;

int main()
{
  int r,i,j;
  cout<<"Enter no. of rows: ";
  cin>>r;

  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    cout<<"*";
    for(j=1;j<=2*(r-i);j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<"\n";
  }
    for(i=r;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    cout<<"*";
    for(j=1;j<=2*(r-i);j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<"\n";
  }
  return 0;
}


// OUTPUT:
// Enter no. of rows: 5
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *