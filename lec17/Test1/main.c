#include "stack-ds.h"

stack_ds_t stack1;
stack_ds_t stack2;

uint32_t popped_data = ZERO_INIT;

uint32_t top_data = ZERO_INIT;

uint32_t size = ZERO_INIT;



int main()
{




ret_status_t ret = R_NOK;
ret = stack_init(&stack1);

if(R_NOK == ret)
{
   printf("error....stack1 is not initialized!!!");
}

else
{
ret = stack_push(&stack1,11);
ret = stack_push(&stack1,22);
ret = stack_push(&stack1,33);
ret = stack_push(&stack1,44);
ret = stack_push(&stack1,55);
ret = stack_push(&stack1,66);
ret = stack_push(&stack1,77);

printf("=============================\n");


ret = stack_pop(&stack1,&popped_data);
if(R_OK == ret)
{
  printf("stack pop value = %d\n",popped_data);
}

ret = stack_pop(&stack1,&popped_data);
if(R_OK == ret)
{
  printf("stack pop value = %d\n",popped_data);
}

ret = stack_pop(&stack1,&popped_data);
if(R_OK == ret)
{
  printf("stack pop value = %d\n",popped_data);
}


ret = stack_pop(&stack1,&popped_data);
if(R_OK == ret)
{
  printf("stack pop value = %d\n",popped_data);
}

ret = stack_pop(&stack1,&popped_data);
if(R_OK == ret)
{
  printf("stack pop value = %d\n",popped_data);
}

ret = stack_pop(&stack1,&popped_data);
if(R_OK == ret)
{
  printf("stack pop value = %d\n",popped_data);
}

ret = stack_pop(&stack1,&popped_data);
if(R_OK == ret)
{
  printf("stack pop value = %d\n",popped_data);
}

printf("=============================\n");

ret = stack_push(&stack1,11);
ret = stack_push(&stack1,22);
ret = stack_push(&stack1,33);
ret = stack_push(&stack1,18);
ret = stack_push(&stack1,39);



ret = stack_pop(&stack1,&popped_data);
if(R_OK == ret)
{
  printf("stack pop value = %d\n",popped_data);
}
printf("=============================\n");



ret = stack_top(&stack1,&top_data);
if(R_OK == ret)
{
  printf("stack top value = %d\n",top_data);
}

printf("=============================\n");

ret = stack_size(&stack1,&size);
if(R_OK == ret)
{
  printf("stack size = %d\n",size);
}
printf("=============================\n");



ret = stack_display(&stack1);

}





ret = stack_init(&stack2);

if(R_NOK == ret)
{
   printf("error....stack2 is not initialized!!!");
}

else
{

}






return 0 ;
}
