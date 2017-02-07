/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE]; // creates an array on the stack

    //printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	array[i] = 42; // assigns 42 to array values
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE]; // creates an array on the stack

    //printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	array[i] = i; // assigns array indices to array values
    }
}

int main()
{
    int i;
    int *array = foo(); // tries to assign the pointer array to the returned value from foo.  Because the array was initialized in foo, it was removed from memory after foo returned so the array contents no longer exist
    bar();  // creates and edits values in a local array

    for (i=0; i<SIZE; i++) {
	printf("%d\n", array[i]);
    }

    return 0;
}
