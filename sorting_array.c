#include<stdio.h>
int sort(int arr,int *i, int *j)
{
    int temp=arr[i];
    arr[i]=arr[j];
   arr[j]=temp;
   
}
int main()
{    int x;
    int arr[5];
    printf("enter the elements:");
    for(int i=0;i<5;i++)
    {
         scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=1;i<5;i++)
        {
            if(arr[i]>arr[j])
            {
                
                
            x=sort(arr,i,j);
            for(int i=0;i<5;i++)
     {
        printf("%d",arr[i]);
     }
        
    }
            }
            
            
        }
       
     
    return 0;
    
}