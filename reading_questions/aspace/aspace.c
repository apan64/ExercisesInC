/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int global;

int main ()
{
    int local = 5;
    void *p = malloc(128);

    printf ("Address of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    printf ("Address of p is %p\n", p);
    
	void *o = malloc(128);

    printf ("\nAddress of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    printf ("Address of o is %p\n", o);

    int x = 10;

    printf ("\nAddress of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    printf("Address of x is %p\n", &x);

    int size = (rand() % 32) + 1;
    void *q = malloc(size);
    void *w = malloc(size);
    printf("\nRandom size is %i\n", size);
    printf ("\nAddress of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    printf("Address of q is %p\n", &q);
    printf("Address of w is %p\n", &w);

    return 0;
}
