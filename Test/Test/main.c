#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int x=7 ,y=5 , z=10 , h =18 ;


unsigned int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

unsigned int *ptr2 [4] = {&x,&y,&z,&h};

unsigned int (*ptr1)[3] = NULL;

ptr1 = arr ;


printf("%d",*(ptr1[0]+3));
    return 0;
}
