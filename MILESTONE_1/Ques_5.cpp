//5. Write a program to find Quotient and Remainder. (Hint: quotient=a/b, remainder=a%b)

#include<iostream>
using namespace std;
int main()
{
    int a,b,quo,rem;

    cout<<"Enter the number a : \n";
    cin>>a;
    cout<<"Enter the number b : \n";
    cin>>b;

    quo= a/b;
    rem=a%b;

    cout<<" \nThe quotient is: \n"<<quo;
    cout<<" \nThe remainder is: \n"<<rem;

    return 0;
}


// OUTPUT:
// Enter the number a : 
// 6
// Enter the number b : 
// 3
 
// The quotient is:  
// 2 
// The remainder is: 
// 0
