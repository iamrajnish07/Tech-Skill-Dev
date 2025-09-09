#include<stdio.h>
int main(){
    int m,n; // m = no. of rows & n = no. of columns
    printf("enter the value of rows and columns:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter array element:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int top=0,bottom=m-1,left=0,right=n-1;
    while(top<=bottom&&left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            printf("%d\t",a[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            printf("%d\t",a[i][right]);
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--)
        {
            printf("%d\t",a[bottom][i]);
        }
        bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
        {
            printf("%d\t",a[i][left]);
        }
        left++;
        }
    }
    return 0;
}