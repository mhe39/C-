#ifndef _STACK_DS_H

#define _STACK_DS_H

#define STACK_DEBUG

#include"std_types.h"


#define STACK_MAX_SIZE 5

typedef struct stack_ds{

uint32_t stack_pointer ;

uint32_t data[STACK_MAX_SIZE] ;

}stack_ds_t;

typedef enum satck_status
{
    EMPTY,
    FULL,
    NOT_FULL


}stack_status_t;


/***********************************
*@brief
*
*@param
*
*@retval
******************/

ret_status_t stack_init(stack_ds_t *my_stack) ;



/***********************************
*@brief
*
*@param
*
*@retval
******************/

ret_status_t stack_push(stack_ds_t *my_stack,uint32_t value) ;

/***********************************
*@brief
*
*@param
*
*@retval
******************/

ret_status_t stack_pop(stack_ds_t *my_stack,uint32_t *value) ;

/***********************************
*@brief
*
*@param
*
*@retval
******************/

ret_status_t stack_top(stack_ds_t *my_stack,uint32_t *value) ;



/***********************************
*@brief
*
*@param
*
*@retval
******************/

ret_status_t stack_size(stack_ds_t *my_stack,uint32_t *stack_size) ;

/***********************************
*@brief
*
*@param
*
*@retval
******************/

ret_status_t stack_display(stack_ds_t *my_stack) ;

#endif // _STACK_DS_H
