#include <stdio.h>
#include <stdlib.h>



extern unsigned int x ;


int main()
{

const unsigned int i =11;
                         //printf("Hello world!\n %d\n",x);/*0b00001000*/ ;
int *ptr= &i ;

*ptr = 20 ;
 signed char y = 234;

 unsigned char z = 234;

 printf("%d %d \n %c %c\n",y,z,y,z) ;                    //   0b11111111 ;

printf("%i\n",y);

printf("%d\n",i) ;

                                      //printf("0x%x",x|y)

printf("%d  x=%d\n",sizeof(++x),x) ; /*so important please notice how size of acts when it holds an assignment inside of it (no change in value)*/


signed int h = 3 ;
    if(h=3)/*to prevent logical error we say (3==h) not (h==3) in case we forgot and typed = it will return and error*/
    {

        printf("\n%d",h) ;
    }
    return 0;
}
