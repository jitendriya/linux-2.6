#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
 int a,b;
printf("\n enter the values of a and b");
scanf("%d%d ",&a,&b);
a =a+b;
b= a-b;
a= a-b;

printf("%d %d",a,b);


return 0;
}
