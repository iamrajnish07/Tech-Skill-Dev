#include<stdio.h>
int main()
{ int sum=0;
    int a[3][3];//b[3][3],c[3][3];
    printf("Enter first array element:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    // printf("Enter second array element:");
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         scanf("%d",&b[i][j]);
    //     }
    // }
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         if(i==j||i>j)
    //         {
    //         c[i][j]=a[i][j]+b[i][j];
    //         }
    //         else{
    //             c[i][j]="-";
    //         }
    //     }
    // }
    // printf("Sum of array is:\n");
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
            
    //         printf("%d\t",c[i][j]);
    //     }
    //     printf("\n");
    // }
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            if(i==j||i>j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum is :%d ",sum);
    return 0;
}