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
    int n;
    printf("searching element is:");
    scanf("%d",&n);
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            if(i==j||i<j)
            {
            if(n==a[i][j])
            {
            
                printf("persent");
                
            }
           
            }

        }
    }
    // printf("sum is :%d ",sum);
   
}
