//Q2. Write a program to print nos. from 1 to 50 that are divisible by 3

#include<iostream>

using namespace std;

 int main()
 {
     cout<<"The numbers between 1 to 50 which are divisible by 3 are: \n";
     for(int i=1;i<=50;i++)
     {
     if(i%3==0)
     cout<<i<<endl;
     }

     return 0;
 }



 /*OUTPUT:
 The numbers between 1 to 50 which are divisible by 3 are: 
3
6
9
12
15
18
21
24
27
30
33
36
39
42
45
48 */