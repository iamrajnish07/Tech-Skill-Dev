#include<stdio.h>

int main(){
    int n;
    printf("enter the length of array");
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i++)
    {  
         scanf("%d",(arr+i));
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
    printf("largest number is:%d",max);
   
return 0;
}
