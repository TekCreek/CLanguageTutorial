#include <stdio.h>

void main()
{
   int a,b;

   printf("Enter a");
   scanf("%d",&a);

   printf("Enter b");
   scanf("%d",&b);

   if( a > b )
    printf(" a is big ");
   else
    printf(" b is big ");
}