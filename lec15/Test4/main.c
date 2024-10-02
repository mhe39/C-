#include <stdio.h>
#include <stdlib.h>

typedef union
{
    unsigned int id ;

    float degree ;

}student_t;

student_t ahmed ;

student_t *ptr ;



int main()
{
  ptr = &ahmed ;
    ahmed.id = 11;
    printf("%d\n",ahmed);
    printf("%d\n",ahmed.id);

    ptr->id = 15 ;
    printf("%d\n",ahmed.id);

    (*ptr).id = 20 ; /*important*/
    printf("%d\n",ahmed.id);
    printf("%f\n",ahmed.degree); //global uninitialized bbs =0


    return 0;
}
