#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[20];
   fgets(name,sizeof(name),stdin);
   printf("My name is %s",name);
    return 0;
}
