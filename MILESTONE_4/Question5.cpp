// WAP using function to find the largest and second largest element in the array.

#include<bits/stdc++.h>
using namespace std;
void maxAndSecondMax(int *arr, int size)
{
   int max= INT_MIN;
   int s_max= INT_MIN;
   for(int i=0;i<size; ++i)
   {
      if(arr[i] >max)
      {
         s_max= max;
         max= arr[i];
      }
      else if(arr[i]> s_max && arr[i]!= max)
      {
         s_max= arr[i];
      }
   }
   if(s_max==INT_MIN)
   {
      s_max= -1;
   }
   cout<<max<<" "<<s_max;
}
int main()
{
   int N= 10;
   int A[N]= {12,76,-99,0,333,1,65,33,9,10};
   maxAndSecondMax(A,N);
   return 0;
}  


// OUTPUT:
// 333 76