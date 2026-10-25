#include<stdio.h>

void main()
{
     int a;
     printf("Enter a");
     scanf("%d",&a);
     
     if (a>0)
     {
       printf("a is positive");
     }
     else if (a<0)
     {
       printf("a is negative");
     }
     else 
     {
       printf("a is zero");
     }
}
