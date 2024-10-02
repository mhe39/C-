#include <stdio.h>


unsigned int arr_3D [3][3][3]={
    {{1,2,3},{4,5,6},{7,8,9}},

    {{10,11,12},{13,14,15},{16,17,18}},

    {{19,20,21},{22,23,24},{25,26,27}}
};
unsigned int (*ptr1)[3][3]= NULL ; /*1st method*/


unsigned int (*ptr2)[3][3][3]= NULL ; /*1st method*/

unsigned int (*ptr3)[3]=NULL; 

unsigned int (*ptr4)[3]=NULL; 

unsigned int (*ptr5)[3][3][3]= NULL ;
int main ()
    {

//printf("%c",~(-99)) ;
ptr1=arr_3D;

ptr2=arr_3D;

ptr3 =arr_3D;

ptr4 = &arr_3D;

ptr5 = &arr_3D;
printf("first method ---> %d\n",*ptr1[0][0]);

printf("second method ---> %d\n",*ptr2[0][0][0]);
ptr3++;
printf("%d\n",(*ptr3)[0]);
ptr4++;
printf("%d\n",(*ptr4)[0]);

printf("%d\n",*ptr5[0][0][0]);
ptr5++;
printf("%d\n",*ptr5[0][0][0]);

    return 0 ;
    }