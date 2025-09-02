//copy string
#include<stdio.h>
void copystring(char *str,char *stringcopy)
{ while(*str!="\0")
{
    *stringcopy=*str;
     str++;
     stringcopy++;
}
*stringcopy="\0";

}
int main()
{
 char str1[100],str2[100];
 printf("enter a string: ");
gets(str1);
 copystring(str1,str2);
 printf("string is :%s\n",str2);
 return 0;
}