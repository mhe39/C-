#ifndef _QUEUE_ARRAY_H
#define _QUEUE_ARRAY_H

#include "Platform_Types.h"



typedef struct
{
    void **QueueArray;

    uint32 QueueMaxSize ;

    sint32 ElementCount ;

    sint32 QueueFront ;

    sint32 QueueRear ;

}Queue_t;

typedef enum {
    QUEUE_NOK = 0,     /* Queue operation not performed successfully */
    QUEUE_OK,          /* Queue operation performed successfully  */
    QUEUE_FULL,        /* Queue is full */
    QUEUE_EMPTY,       /* Queue is empty */
    QUEUE_NULL_POINTER
}QueueStatus_t;
// HINT: # define is safer >>>> enums size are compiler dependant


Queue_t *CreateQueue(uint32 maxSize, QueueStatus_t *ret_status);
QueueStatus_t EnqueueElement(Queue_t *queue_obj, void *item_ptr);
void *DequeueElement(Queue_t *queue_obj, QueueStatus_t *ret_status);
void *QueueFront(Queue_t *queue_obj, QueueStatus_t *ret_status);
void *QueueRear(Queue_t *queue_obj, QueueStatus_t *ret_status);
QueueStatus_t GetQueueCount(Queue_t *queue_obj, uint32 *QueueCount);
QueueStatus_t DestroyQueue(Queue_t *queue_obj);


#endif // _QUEUE_ARRAY_H
