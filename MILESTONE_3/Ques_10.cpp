// Q10. Write a program to implement binary search using function.


#include<iostream>
using namespace std;
int main()
{
    int search(int [],int,int);
    int n,i,a[100],e,res;
    cout<<"Number of Elements:";
    cin>>n;
    cout<<"\nEnter Elements of Array in Ascending order\n";
    
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    
    cout<<"\nEnter element to be searched:";
    cin>>e;
    
    res=search(a,n,e);
    
    if(res!=-1)
        cout<<"\nElement found at position "<<res+1;
    else
        cout<<"\nElement not found!";
    return 0;
}
int search(int a[],int n,int e)
{
    int f,l,m;
    f=0;
    l=n-1;
    
    while(f<=l)
    {
        m=(f+l)/2;
        if(e==a[m])
            return(m);
        else
            if(e>a[m])
                f=m+1;
            else
                l=m-1;
    }
    
    return -1;
}


// OUTPUT:
// Number of Elements:5

// Enter Elements of Array in Ascending order
// 23
// 45
// 67
// 89
// 110

// Enter element to be searched:110

// Element found at position 5