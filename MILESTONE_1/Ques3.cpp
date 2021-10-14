//Write a program to print a number entered by user and apply prefix and postfix ++, -- operator on it and display output every time the operator is used.


#include<iostream>
using namespace std;
int main()
 {
     int num;
     cout<<"Enter any number: ";
     cin>> num;
     cout<<"Number entered by the user is: \n" << num<<"\n";
     cout<<"Post Increment \n";
     cout<<num++<<"\n";
     cout<<"Pre Increment \n";
     cout<<++num<<"\n";
     cout<<"Post Decrement \n";
     cout<<num--<<"\n";
     cout<<"Pre Decrement \n";
     cout<<--num<<"\n";
     return 0;
 }



//    OUTPUT: 
// Enter any number: 7
// Number entered by the user is: 
// 7
// Post Increment 
// 7
// Pre Increment 
// 9
// Post Decrement 
// 9
// Pre Decrement 
// 7