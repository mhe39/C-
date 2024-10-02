#include <stdio.h>
#include <stdlib.h>

void print_mohamed (void);

void print_ahmed (void);

void (*PtrNames1[2])(void)={NULL,NULL};

void (*PtrNames2[2])(void)={print_mohamed,print_ahmed};

int main()
{
    /*Pointer to function*/

    PtrNames1[0] = print_mohamed; // or &print_mohamed

    PtrNames1[1] = print_ahmed;    // or &print_ahmed
 /*OR*/
    // void (*PtrNames[2])(void)={print_mohamed,print_ahmed};

    PtrNames1[0]();  // Prints Mohamed
    PtrNames1[1]();  // Prints Ahmed

    PtrNames2[0]();  // Prints Mohamed
    PtrNames2[1]();  // Prints Ahmed

    return 0;
}

void print_mohamed (void)
{
    printf("Mohamed\n");
}

void print_ahmed (void)
{
    printf("Ahmed\n");
}
