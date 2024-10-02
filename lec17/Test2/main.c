#include "StackArrayDS.h"


Stack_t * stack1_ptr =NULL ;

void * data_ptr ;

uint32 maxsize = 0 ,stack_counter=0 ;

uint32 var1 = 32 ;
uint16 var2 = 16 ;
float var3 = 3.2 ;


int main()
{
    StackStatus_t Stack1_Status = STACK_NOK ;

    printf("Enter number of stack elements of stack 1: ");

    scanf("%d",&maxsize);

    stack1_ptr = CreateStack(maxsize,&Stack1_Status);

    if(stack1_ptr)
    {
        printf("stack1 got created successfully \n");
    }

    else{}

    Stack1_Status = PushStack(stack1_ptr,&var1);
    printf ("stack status = %d \n" ,Stack1_Status) ;

    Stack1_Status = PushStack(stack1_ptr,&var2);
    printf ("stack status = %d \n" ,Stack1_Status) ;

    Stack1_Status = PushStack(stack1_ptr,&var3);
    printf ("stack status = %d \n" ,Stack1_Status) ;

    Stack1_Status = PushStack(stack1_ptr,&var2);
    printf ("stack status = %d \n" ,Stack1_Status) ;

    Stack1_Status = PushStack(stack1_ptr,&var3);
    printf ("stack status = %d \n" ,Stack1_Status) ;

        Stack1_Status = PushStack(stack1_ptr,&var3);
    printf ("stack status = %d \n" ,Stack1_Status) ;

    data_ptr = StackTop(stack1_ptr,&Stack1_Status);

    printf ("Top value = %d \n" ,*(uint32*)data_ptr) ;

    Stack1_Status = StackCount(stack1_ptr,&stack_counter);

    printf ("stack members = %d \n" ,stack_counter) ;


    if(!stack1_ptr)
    {
        printf("stack1 got destroyed successfully \n");
    }
    else{}

    return 0;
}
