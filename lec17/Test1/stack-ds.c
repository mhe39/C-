#include "stack-ds.h"


/***********************************
*@brief
*
*@param
*
*@retval
******************/

static uint32_t stack_full(stack_ds_t *my_stack)
{

if((STACK_MAX_SIZE -1) == my_stack ->stack_pointer )
{

    return FULL ;
}

else
{

    return NOT_FULL ;

}


}


/***********************************
*@brief
*
*@param
*
*@retval
******************/


static uint32_t stack_empty(stack_ds_t *my_stack)
{

if(-1 == my_stack ->stack_pointer )
{

    return EMPTY ;
}

else
{

    return NOT_FULL ;

}


}




/**********************************************/
ret_status_t stack_init(stack_ds_t *my_stack)
{

    ret_status_t ret =R_NOK ;

    if(NULL == my_stack)
    {
         ret = R_NOK;
    }

     else
    {
        my_stack ->stack_pointer=-1; // Empty & stack pointer is an int that holds the index
        ret = R_OK;
    }

   return ret;
}
/**********************************************/

ret_status_t stack_push(stack_ds_t *my_stack,uint32_t value)
{
    ret_status_t ret = R_NOK;

    if( (NULL == my_stack)   ||(FULL == stack_full(my_stack)))

    {
        #ifdef STACK_DEBUG
        printf("Error, can't push the value (%i).... the stack is FULL!!\n",value);
        #endif // STACK_DEBUG

        return ret;
    }


    else
    {
        my_stack ->stack_pointer++; /*increment then add*/

        my_stack -> data[my_stack -> stack_pointer] = value ;

        #ifdef STACK_DEBUG
        printf("value (%i) is pushed successfully in the stack\n",value);
        #endif // STACK_DEBUG


         ret = R_OK;

       }



return ret;
}

/**********************************************/
ret_status_t stack_pop(stack_ds_t *my_stack,uint32_t *value)

{
    ret_status_t ret = R_NOK;

    if( (NULL == value)   || (NULL == my_stack)   ||(EMPTY == stack_empty(my_stack)))

    {
        #ifdef STACK_DEBUG
        printf("Error, can't pop any value.... the stack is Empty!!\n");
        #endif // STACK_DEBUG



        return ret;
    }


    else
    {
        *value = my_stack -> data[my_stack -> stack_pointer] ; /*decrement then delete*/


        my_stack ->stack_pointer--;

        #ifdef STACK_DEBUG
        printf("value (%i) is popped successfully from the stack\n",*value);
        #endif // STACK_DEBUG

         ret = R_OK;

    }



return ret;
}

/**********************************************/

ret_status_t stack_top(stack_ds_t *my_stack,uint32_t *value)
{
    ret_status_t ret = R_NOK;

    if( (NULL == value)   || (NULL == my_stack)   || (EMPTY == stack_empty(my_stack)))
    {
        #ifdef STACK_DEBUG
        printf("Error, can't get the stack top.... the stack is Empty!!\n");
        #endif // STACK_DEBUG



        return ret;
    }


    else
    {
        *value = my_stack -> data[my_stack -> stack_pointer] ; /*assign*/


        #ifdef STACK_DEBUG
        printf("value (%i) is the top of the stack\n",*value);
        #endif // STACK_DEBUG

         ret = R_OK;

    }



return ret;
}





/**********************************************/

ret_status_t stack_size(stack_ds_t *my_stack,uint32_t *stack_size)
{
    ret_status_t ret = R_NOK;

    if( (NULL == stack_size)   || (NULL == my_stack)  )

    {
        return ret;
    }


    else
    {
        *stack_size = my_stack ->stack_pointer +1;

         ret = R_OK;
    }



return ret;
}



/**********************************************/

ret_status_t stack_display(stack_ds_t *my_stack)
{

   ret_status_t ret = R_NOK;

      sint32_t cnt;

    if( (NULL == my_stack) || (EMPTY == stack_empty(my_stack)))

    {

        #ifdef STACK_DEBUG
        printf("Error, can't display the stack.... the stack is Empty!!\n");
        #endif // STACK_DEBUG

    }


    else
    {
        ret = R_OK;
      for( cnt= (my_stack->stack_pointer) ; cnt >= 0 ; cnt--)
          {
            printf(" ==============================\n" );

            printf("|                              |\n" );

            printf("  index [%i] ===> value = %i\n",cnt,(my_stack->data[cnt]) );

            printf("|                              |\n" );

            printf(" ==============================\n" );

          }


    }


 return ret;
}
