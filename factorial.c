#include<stdio.h>
int fact(int n)
{
    if(n==1||n==0)
    {
    return 1;
    }
    else{
        return n*fact(n-1);
    }

}
int main(){
    int num;
   
    int *ptr;
    printf("enter a numb:");
    scanf("%d",&num);
    *ptr=fact(num);
    printf("factorial is:%d",*ptr);
    return 0;


    
}