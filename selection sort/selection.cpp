#include <iostream>

using namespace std;


#include <iostream>
#define n 6
using namespace std;

int main()
{
     
     int arr[n],i,j,temp;
    for(i=0;i<n-1;i++)
     cin>>arr[i];
    
    for(i=0;i<n-1;i++ )
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j]) 
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
               
           }
        }
    }
    
    for(i=0;i<n-1;i++)
    {
        
       cout<<arr[i]<<" "; 
        
    }
    


    return 0;
}
