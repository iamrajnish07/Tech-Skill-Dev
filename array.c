#include<stdio.h>
int main()
{
    int n=0;
    int arr[5];
    printf("enter the elements:");
    for(int i=0;i<5;i++)
    { 
        scanf("%d",&arr[i]);
        n=n+arr[i];
    }
    printf("%d sum is:",n);
    return 0;
}