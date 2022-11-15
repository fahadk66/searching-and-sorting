#include <iostream>
#define n 8

using namespace std;

int main()
{
    int i,ele,m;
    int arr[n];
    for(i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to found";
    cin>>ele;
    
    for(i=0;i<n-1;i++){
        if(arr[i]==ele)
            m=i; 
            
        
         
        }
    if(m>-1){
            cout<<"element is found"<<"\t"<<m;
        }
    else
         cout<<"element not found";
    

    return 0;
}
