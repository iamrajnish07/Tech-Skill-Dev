#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of array";
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++)
    {  int c=arr[n]+i;
        cin>>c;

    }
    int *ptr=arr;
    int max=*ptr;
    for(int i=1;i<n;i++)
    {
        ptr++;
        if(*ptr>max)
        {
             max=*ptr;
        }
        
           
        
    }
     cout<<"largest number is:"<<max;
   
return 0;
}
