#include <stdio.h>

// Function to be called from Python
void greet(int n)
{
    printf("Hello from C! %d\n", n);
}
