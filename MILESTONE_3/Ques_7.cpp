//7. Create an array and then update its elements' value as the sum of current and pervious elements.

#include<iostream>
 
using namespace std;
int main() 
{
   int i,n,sum=0;
   int arr[]={20,10,5,3,80,55};
   n=6;
   
   for(i=0;i<n;i++) 
   {
      sum+=arr[i];
      cout<<sum<<"   ";
   }
   return 0;
}

// OUTPUT 
// 20   30   35   38   118   173