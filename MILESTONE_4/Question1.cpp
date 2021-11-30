// 1. WAP using function to Reverse a given no.

#include<iostream>
using namespace std;
int reverse(int n);

int main()
{
  int n=0, final=0;
  cout<<"Enter any Number: ";
  cin>>n;

  final=reverse(n);
  cout<<"Reverse number is: " <<final <<endl;

}

int reverse(int n)
{
  int x=0, rev=0;
  while(n!=0)
  {
     x=n%10;
     rev=(rev*10)+x;
     n=n/10;
  }
  return rev;

}



// OUTPUT:
// Enter any Number: 987654321
// Reverse number is: 123456789
