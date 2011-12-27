     #include <stdio.h>
    #include <ctype.h>
    #include <string.h>
     
    int main(int argc,char *argv[])
    {
    char string[100];
    int i,found=0;
     
    printf("Type a string : ");
    gets(string);
     
    for(i=0;i<strlen(string);i++)
    if( isalpha(string[i]))
    found++;
    printf("Number of characters: %d\n",found);
     
    return 0;
    }
 
