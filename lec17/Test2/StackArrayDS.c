#include "StackArrayDS.h"


static uint8 StackISEmpty(Stack_t *obj)
{

return( 0 == obj ->ElementCount);
}




static uint8 StackISFull(Stack_t *obj)
{

    return(obj ->ElementCount == obj ->StackMaxSize);
}


/*******************************
*@brief
*
*@param
*
*@retval
*
********************************/
Stack_t* CreateStack (uint32 maxSize, StackStatus_t *ret_status)
{

Stack_t* my_stack=NULL ;

if(NULL == ret_status)
{
 * ret_status = STACK_NULL_POINTER ;

    my_stack = NULL ;
}
else
{
my_stack =(Stack_t*)malloc (sizeof(Stack_t));

if (!my_stack)
{
    *ret_status = STACK_NOK ;

    my_stack = NULL ;
}

else
{
  my_stack -> StackTop = -1 ; // empty

  my_stack -> ElementCount = 0;

  my_stack -> StackMaxSize = maxSize;

  my_stack ->StackArray = (void **)calloc (my_stack -> StackMaxSize,sizeof(void *)); // calloc to initialize the array members... each mem is void pointer to another array

  if(!my_stack ->StackArray)
  {
      free(my_stack);

      my_stack = NULL ;

      *ret_status = STACK_NOK ;
  }

  else
  {
       *ret_status = STACK_OK ;
  }
}

}

return my_stack ;
}



/*******************************
*@brief
*
*@param
*
*@retval
*
********************************/


Stack_t* DestroyStack (Stack_t* stack_obj, StackStatus_t *ret_status)

{

if((NULL== ret_status) || (NULL == stack_obj))
{
 * ret_status = STACK_NULL_POINTER ;
}
else
{
free (stack_obj -> StackArray);

free(stack_obj);
* ret_status = STACK_OK ;
}

return NULL ;
}

/*******************************
*@brief
*
*@param
*
*@retval
*
********************************/
StackStatus_t PushStack (Stack_t* stack_obj, void* itemPtr)
{

StackStatus_t StackStatus = STACK_NOK ;

if((NULL== stack_obj) || (NULL == itemPtr))
{
 StackStatus = STACK_NULL_POINTER ;
}
else
{
  if(StackISFull(stack_obj))
    {
      StackStatus = STACK_FULL;
    }

    else
    {
        (stack_obj ->StackTop ++) ;

        stack_obj ->StackArray[stack_obj ->StackTop] = itemPtr ;

        (stack_obj ->ElementCount)++;

      StackStatus = STACK_OK ;
    }

}

return StackStatus ;
}

/*******************************
*@brief
*
*@param
*
*@retval
*
********************************/
void* PopStack (Stack_t* stack_obj, StackStatus_t *ret_status)
{

void * data_ptr_out = NULL ;


if((NULL== ret_status) || (NULL == stack_obj))
{
 * ret_status = STACK_NULL_POINTER ;

 data_ptr_out = NULL ;
}
else
{

    if(StackISEmpty(stack_obj))
    {
      *ret_status = STACK_EMPTY;
      data_ptr_out = NULL ;
    }

    else
    {

        data_ptr_out = stack_obj ->StackArray[stack_obj ->StackTop] ;

        (stack_obj ->StackTop --) ;

        (stack_obj ->ElementCount)--;

        *ret_status = STACK_OK ;

    }

}

return data_ptr_out ;
}



/*******************************
*@brief
*
*@param
*
*@retval
*
********************************/

void* StackTop (Stack_t* stack_obj, StackStatus_t *ret_status)
{

void * data_ptr_out = NULL ;


if((NULL== ret_status) || (NULL == stack_obj))
{
 * ret_status = STACK_NULL_POINTER ;

 data_ptr_out = NULL ;
}
else
{

    if(StackISEmpty(stack_obj))
    {
      *ret_status = STACK_EMPTY;
      data_ptr_out = NULL ;
    }

    else
    {

        data_ptr_out = stack_obj ->StackArray[stack_obj ->StackTop] ;

        *ret_status = STACK_OK ;

    }

}

return data_ptr_out ;
}
/*******************************
*@brief
*
*@param
*
*@retval
*
********************************/
StackStatus_t StackCount (Stack_t* stack_obj, uint32 *stack_count)
{
StackStatus_t StackStatus = STACK_NOK ;


if((NULL== stack_obj) || (NULL == stack_count))
{
    StackStatus = STACK_NULL_POINTER ;
}
else
{

    *stack_count = stack_obj ->ElementCount ;

      StackStatus = STACK_OK ;


}

return StackStatus ;
}
