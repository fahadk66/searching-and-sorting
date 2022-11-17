#include <stdio.h>
#include<iostream>
using namespace std;
#define n 6


int main()
{
    int arr[n],cons,i,temp;
    cout<<"Enter the number";
    for(int i=0;i<=n-1;i++)
    cin>>arr[i];
    cons=1;
    while(cons<n)
    {
        for(i=0;i<n-cons;i++)
        {
            if(arr[i]>arr[i+1])
              { temp=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
              }
        }
        cons++;
    }
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
     return 0;
}
