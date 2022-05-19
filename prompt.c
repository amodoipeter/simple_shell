#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void info();
void help();
void greet(char *name);

int main(int argc, char *argv[])
{
    if(argc==1)
    {
        info();
    }
    if(argc==2)
    {
        if(strcmp(argv[1], "-h")==0)
        {
            help();
        }
        else{
            greet(argv[1]);
        }
    }
}
void info()
{
    printf("Hello, type hello -h for more information\r\n");
}
void help()
{
    printf("Type hello {name} for the best greeting\r\n"); 
}
void greet (char *name)
{
    printf("Hello there, %s\r\n", name);
}
