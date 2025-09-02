#include<stdio.h>
int main()
{    int n;
    int arr[5];
    printf("enter the elements:");
    for(int i=0;i<5;i++)
    {
         scanf("%d",&arr[i]);
    }
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        if(n==arr[i])
        {
           printf("number is persent in the array \n");
           printf("Position is %d",i);
        }
    }
    return 0;
}