#include <stdio.h>
#include <stdlib.h>

unsigned int *ptr ;
unsigned int *ptr1=5 ;

unsigned int x = 10 ;

unsigned int y = 5 ;

int main()
{

    {                                  /*NumberOne is to be only seen inside the curly bracke*/
        unsigned int NumberOne = 55 ;

        ptr = &NumberOne ;
    }

   *ptr = 99 ;

    printf("%i\n",&*ptr1);
    printf("%i\n",*&ptr1);

    x = x + ++y ;
    printf("x=%d\n",x);
    printf("y=%d\n",y);

    return 0;
}



/*
unsigned int arr [5][5] ;




 for(unsigned int i =0 ; i<5 ; i++ )
    {

    for(unsigned int j =0 ; j<5 ; j++ )
    {
        if(i==0 || i==4 || j==0 || j==4)
        {
            printf("*\t");
        }
    else
    {

    printf("\t");
    }
    }
    printf("\n\n\n");
    }

*/


/*
    unsigned int *ptr1 ;
    unsigned int *ptr2 ;
    unsigned int x;
    unsigned int y;

    x = 15 ;
    y = 20 ;
    ptr1 = &x ;
    ptr2 = &y ;

    printf("0x%X \n",ptr1) ;
    printf("0x%X \n",&x) ;
    printf("0x%X \n",ptr2) ;
    printf("0x%X \n",&y) ;



    printf("0x%X\n",ptr1) ;
    printf("0x%X\n",ptr2) ;
    printf("0x%X\n",ptr3) ;
    */



