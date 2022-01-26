#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a;

    a=2;

    do
    {
        printf("\t%d\n",a);
        a=a+2;
    }
    while(a<=100);


    getch();
    return 0;
}
