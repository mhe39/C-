#include <stdio.h>
#include <stdlib.h>

void Print_Sum1 (unsigned int , unsigned int);

void Print_Sum2 (unsigned int , unsigned int);

void Print_Sum(unsigned int ,
               unsigned int,

               void (*Ptr_Sum) (unsigned int , unsigned int));


void (*Ptr_Print_Sum) (unsigned int , unsigned int)=NULL;

int main()
{

Print_Sum(4,5,Print_Sum1);
Print_Sum(4,5,Print_Sum2);

void *ptr = "Dimitrov";

ptr = (unsigned long long*)ptr +1 ;
printf("%s",ptr);

    return 0;
}




void Print_Sum1 (unsigned int Num1 , unsigned int Num2)
{
    printf("Summing -> %d\n",(Num1+Num2));
}


void Print_Sum2 (unsigned int Num1 , unsigned int Num2)
{
    printf("Summing => %d\n",(Num1+Num2));
}


void Print_Sum(unsigned int Num1,
                unsigned int Num2,
                void (*Ptr_Sum) (unsigned int Num1 , unsigned int Num2))
       {
           Ptr_Sum (Num1,Num2);
       }


