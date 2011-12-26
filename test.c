#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
 int a,b,c;
printf("\n enter the values of a and b");
scanf("%d%d ",&a,&b);
c =a+b;
a= a-b;
b=a-b;
printf("%d",c);


return 0;
}
