#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20], age[5];

    printf("Enter your name: ");
    fgets(name, sizeof(name),stdin);

    printf("Enter your age: ");
    fgets(age, sizeof(age),stdin);

    printf("My name is %s and I am %d years old", name, age);

    return 0;
}
