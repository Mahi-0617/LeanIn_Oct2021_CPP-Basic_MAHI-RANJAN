//2. WAP using function to Check whether a given no. is palindrome or not

#include<iostream>
using namespace std;
void rev(int);
int main()
{
        int num1;
        cout<<"Enter any number to verify if it is palindrome or not =  ";
        cin>>num1;
        rev(num1);
}

void rev(int num1)
{
        int num2,d,x=0;
        num2=num1;

        while(num1>0)
        {
                d=num1%10;
                x=(x*10)+d;
                num1/=10;
        }

        if(num2==x)
        cout<<"\nThe Number "<<num2<<" is a Palindrome no.\n";
        else
        cout<<"\nThe Number "<<num2<<" is NOT a Palindrome no.\n";

}


// OUTPUT:
// Enter any number to verify if it is palindrome or not =  14541

// The Number 14541 is a Palindrome no.


// Enter any number to verify if it is palindrome or not =  4532

// The Number 4532 is NOT a Palindrome no.