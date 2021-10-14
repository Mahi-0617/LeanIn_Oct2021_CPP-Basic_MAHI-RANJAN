//4. Write a program to print sum of four numbers entered by user. (Hint: sum=a+b+c+d)

#include<iostream>
using namespace std;
int main()
{
    float num1,num2,num3,num4,Sum;

    cout<<"Enter number 1st\n";
    cin>>num1;
    cout<<"Enter number 2nd\n";
    cin>>num2;
    cout<<"Enter number 3rd\n";
    cin>>num3;
    cout<<"Enter number 4rth\n";
    cin>>num4;

    Sum= num1+num2+num3+num4;

    cout<<"The sum of num1+num2+num3+num4 is : "<<Sum;
    return 0;
}


// OUTPUT:
// Enter number 1st
// 6
// Enter number 2nd
// 4
// Enter number 3rd
// 1
// Enter number 4rth
// 5
// The sum of num1+num2+num3+num4 is : 16