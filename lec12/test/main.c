#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char *Names[2] = {"Lionel Messi","Frenkie De Jong"} ;


  unsigned int num = 0x11 ;
  unsigned int * ptr = &num ;
unsigned const char * str = "Mohamed" ;
char arr[] = "blah blah" ;

//*str = 'W' ;/*program crahses*/
arr[3]='b';
printf("%c\n",*(str+3) ) ;
printf("%s\n",arr);

printf("0x%X\n",ptr);

printf("0x%X\n",*&ptr);
printf("=========================\n");
/*Notice the difference in the following*/
printf("0x%X\n",Names);

printf("0x%X\n",&Names[0]);

printf("0x%X\n",&Names[1]);


printf("0x%X\n",Names[0]);

printf("0x%X\n",Names[1]);

printf("===============\n");

unsigned char arr1[][10] = {"Apple","Banana","Orange"};

printf("%c\n",arr1[1][11]);


printf("=================\n");

unsigned int Numbers[2][3] = {{11,22,33},{44,55,66}};

unsigned int (*ptr_num)[3]= NULL ;

ptr_num = Numbers;

ptr_num++ ;

printf("%d\n",*(*ptr_num)); //*ptr is the address of 1st element of the 2nd array and to printf value we add another *

printf("%d\n",*(ptr_num[0]));  /*we can also do another way to print value by writing *(ptr[0])for 1st element of the second array  */

printf("%d\n",*(ptr_num[0]+1)); /*to move between elements we use *(ptr[0]+n)*/

printf("%d\n",*(ptr_num[0]+2)); /*to move between the arrays of the 2d array we use ptr++ " NOTICE THE DIFFERENCE between ptr++ and *(ptr[0])"*/

printf("=================\n");
printf("%d\n",*(ptr_num[1]));
ptr_num++;
printf("%d\n",*(ptr_num[0]));
printf("=================\n");

unsigned char arr2[8] = {'M','O','H','A','M','E','D'} ;

unsigned char *ptr2 =NULL ;


ptr2 = "Mohamed"  ;

/*    *(ptr2+2) = 'M' ;   */ //ERROR

printf("%s\n",arr2) ;



unsigned int arr3[2][3] = {{11,22,33},{44,55,66}};

unsigned int (*ptr3)[2] =NULL ;

ptr3 =arr3 ;

printf("%d\n",*(*ptr3));

printf("%d\n",*(ptr3[1]));

printf("%d\n",*(ptr3[2]));

ptr3++;

printf("%d\n",*(*ptr3));

printf("%d\n",*(ptr3[1]));

ptr3++;

printf("%d\n",*(*ptr3));

printf("%d\n",*(ptr3[0]));

printf("%d\n",*(ptr3[0]+1));
return 0;
}
