//7. Write a program to swap two given numbers a and b

#include<iostream>
using namespace std;
int main()
{
    
     int a,b,temp;
     cout<< "Enter the desired value of 'a' ";
     cin>>a;
     cout<< "Enter the desired value of 'b' ";
     cin>>b;

     temp=a;
     a=b;
     b=temp;

     cout<<"Value of 'a' after swapping"<<"\n"<<a<<"\n";
     cout<<"Value of 'b'after swapping"<<"\n"<<b<<"\n";
     return 0;
}



// OUTPUT:
// Enter the desired value of 'a' 76
// Enter the desired value of 'b' 99
// Value of 'a' after swapping
// 99
// Value of 'b'after swapping 
// 76