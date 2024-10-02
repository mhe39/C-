#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct students{
unsigned int ID ;

float degree ;
}student1 ;



struct students student1 ={15,17.8};



typedef struct {

char student_name [30];

float degree;

unsigned short int student_id;
}students_t;

void fun(students_t*temp_ptr);

students_t *ptr = NULL;

students_t *ptr1 = NULL;
int main()
{


    struct students{
unsigned int ID ;

float degree ;
       }student2 ;


printf("%.2f\n\n",student1.degree);


ptr = (students_t*) malloc(sizeof(students_t));

ptr1 = (students_t*) malloc(sizeof(students_t));
if(NULL != ptr)
{
    strcpy (ptr->student_name,"Mohamed");

    ptr->degree = 34.65194 ;

    ptr->student_id = 12 ;
}
else{
    printf("Error\n");
    }



    if(NULL != ptr1)
{
    strcpy (ptr1->student_name,"Ahmed");

    ptr1->degree =25 ;

    ptr1->student_id = 11 ;


}



else{
    printf("Error\n");
    }

    fun(ptr);
    fun(ptr1);

     free(ptr);
      free(ptr1);

    return 0;
}


void fun(students_t*temp_ptr)
{
    printf("%s\n",temp_ptr->student_name);

    printf("%.2f\n",temp_ptr->degree);

    printf("%d\n",temp_ptr->student_id);


}







