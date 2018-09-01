#include<stdio.h>
int c;
main()
{
    c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}

