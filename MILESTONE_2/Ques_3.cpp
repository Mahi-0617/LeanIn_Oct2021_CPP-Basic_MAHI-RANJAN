// Q3. Write a program to print nos. from 1 to 50 by replacing the no. divisible by 3 with "buzz", no. divisible by 5 with "fizz" and no. divisible by 15 with "fizzbuzz".


#include<iostream>
using namespace std;
int main()
 {
     for(int i=1;i<=50;i++)
     {
        if(i%15==0)
        cout<<"fizzbuzz"<<"\n";

        else if(i%3==0)
        cout<<"fizz"<<"\n";

        else if(i%5==0)
        cout<<"buzz"<<"\n";

        else 
        cout<<i<<"\n";
     }
    return 0;
}


/*OUTPUT:
1
2       
fizz    
4       
buzz    
fizz    
7       
8       
fizz    
buzz    
11      
fizz    
13      
14      
fizzbuzz
16      
17
fizz
19
buzz
fizz
22
23
fizz
buzz
26
fizz
28
29
fizzbuzz
31
32
fizz
34
buzz
fizz
37
38
fizz
buzz
41
fizz
43
44
fizzbuzz
46
47
fizz
49
buzz */
