#include<stdio.h>
int main()
{
int a,b;
printf("enter value of a and b");
scanf("%d %d",&a,&b);
printf("befor swapping a=%d,b=%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping a=%d,b=%d",a,b);
}


