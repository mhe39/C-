#include <stdio.h>
#include <stdlib.h>

unsigned int numbers [5] = {0x11224488,0x22,0x33,0x44,0x55} ;

void * ptr3 = NULL ;
unsigned int *ptr1 = NULL ;
unsigned int *ptr2 = NULL ;

int main()
{
    ptr1 = &numbers[0] ;

    ptr2 = &numbers[4] ;

    printf("0x%X - 0x%X = %i\n",ptr2,ptr1,ptr2+1-ptr1 ) ; // getting num of elements of an array using pointers

    ptr3 = &numbers[0] ;


   printf("0x%X\n",*((unsigned short *)ptr3+1 )) ;


   printf("0x%X\n",*((unsigned int *)ptr3)) ;




    return 0;
}
