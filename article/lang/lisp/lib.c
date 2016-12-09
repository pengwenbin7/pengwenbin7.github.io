#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char *name;
} People;

int add(int a, int b)
{
    return a + b;
}

People *newPeople(int age, char *name)
{
    People *p = (People *) malloc(sizeof(People));
    p->age = age;
    p->name = name;
    return p;
}

int main(int argc, char *argv)
{
    People *p = newPeople(13, "Sara Scott");
    printf("%d, %s\n", p->age, p->name);

    return 0;
}
