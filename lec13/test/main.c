#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned char myname[30] = "Mohamed" ;

unsigned char myname2 [30];


int main()
{
    memcpy(myname2,myname,30);

    printf("%s\n",myname2) ;

    printf("%s\n",myname) ;

    memset(myname,'*',30) ;

    printf("%s\n",myname) ;

    memset(myname+6,'M',3) ;

    printf("%s\n",myname) ;

    memset(myname+9,'O',3) ;

    printf("%s\n",myname) ;

    printf("===============\n") ;


    memcpy(myname2,myname,30);

    printf("%s\n",myname2) ;


    unsigned int myarr [] ={0x11,0x22,0x33,0x44,0x55};

  printf("=================\n");

  printf("0x%x\n",&myarr[0]);


  printf("0x%x\n",myarr);


  printf("0x%x\n",&myarr);

  printf("=================\n");

  printf("=================\n");

  printf("0x%x\n",&myarr[0]+1);


  printf("0x%x\n",myarr+1);


  printf("0x%x\n",&myarr+1); /*next block address after the array*/


  printf("0x%x\n",*(&myarr+1)); /*first byte address in the next block address after the array #ATTENTION#*/

  printf("=================\n");

  printf("%i",*(&myarr+1) - myarr); /*number of elements in the array #INTERVIEW#*/

    return 0 ;
}
