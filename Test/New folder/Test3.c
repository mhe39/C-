#include <stdio.h>

typedef struct {

    unsigned char name [30] ;
    unsigned int num ; 
    } students_t; 

void get_info (students_t[], unsigned int );


students_t students[2] = {{"Mohamed",12}
                          
                         ,{"Ahmed",5}
                         
                         };

int main()
{



get_info(students,2);


return 0 ;

}


void get_info (students_t std[], unsigned int size)
 {
 
printf("%s",std[1].name);

 }
