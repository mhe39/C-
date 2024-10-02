#include "QueueArray.h"

static uint8 QueueIsFull (Queue_t*queue_obj)
{
    return ((queue_obj ->ElementCount ) == (queue_obj ->QueueMaxSize));
}

static uint8 QueueIsEmpty (Queue_t*queue_obj)
{
    return (0 == (queue_obj ->ElementCount ));
}



/**
*
*
*
*
*/
Queue_t *CreateQueue(uint32 maxSize, QueueStatus_t *ret_status)
{


    Queue_t *My_Queue;


    if(NULL== ret_status)
    {
      *ret_status = QUEUE_NULL_POINTER ;
    }

    else
    {
        My_Queue = (Queue_t*)malloc(sizeof(Queue_t)) ;

        if(NULL == My_Queue)
        {
             *ret_status = QUEUE_NULL_POINTER ;

              My_Queue = NULL ;

        }

        else
        {

        My_Queue->QueueArray = (void**)calloc (maxSize,sizeof(void*));

        if(NULL == My_Queue->QueueArray)
        {
             *ret_status = QUEUE_NULL_POINTER ;

             My_Queue = NULL ;

        }

        else
        {
           My_Queue->ElementCount = 0 ;

           My_Queue->QueueMaxSize = maxSize;

           My_Queue->QueueFront = -1;

           My_Queue->QueueRear  = -1;

        *ret_status = QUEUE_OK ;
        }
       }
    }

    return My_Queue;
}
/**
*
*
*
*
*/
QueueStatus_t EnqueueElement(Queue_t *queue_obj, void *item_ptr)
{
    QueueStatus_t status = QUEUE_NOK ;

    if((NULL == queue_obj) || (NULL == item_ptr))
    {
        status =QUEUE_NULL_POINTER ;

    }

    else
    {
        if(QueueIsFull(queue_obj))
        {
            status =QUEUE_FULL ;
        }

        else

        {

            /*increment rear then add rear*/


            (queue_obj->QueueRear) ++ ;

           /*queue wraps to element 0 */

            if( ((queue_obj->QueueRear)  == (queue_obj->QueueMaxSize)) )
            {
                queue_obj->QueueRear = 0 ;
            }

            queue_obj->QueueArray[queue_obj->QueueRear] = item_ptr ;

            /*empty queue*/

            if(0 == queue_obj->ElementCount )
            {

                queue_obj->QueueFront = 0 ;

                queue_obj->ElementCount= 1 ;

            }

            else
            {
                (queue_obj->ElementCount)++ ;
            }

              status = QUEUE_OK ;
        }



    }

    return status;
}
/**
*
*
*
*
*/
void *DequeueElement(Queue_t *queue_obj, QueueStatus_t *ret_status)
{
    void *data_ptr = NULL ;

    *ret_status = QUEUE_NOK;

    if((NULL == queue_obj) || (NULL == ret_status))
    {
        *ret_status =QUEUE_NULL_POINTER ;
    }
    else
    {
        if(QueueIsEmpty(queue_obj))

        {
            *ret_status =QUEUE_EMPTY;

            data_ptr = NULL ;
        }
        else
        {
          /*assign then decrement front*/

          data_ptr = queue_obj -> QueueArray[queue_obj->QueueFront];

          queue_obj->QueueFront++;
          /*circular queue*/
          if(queue_obj->QueueFront == queue_obj->QueueMaxSize)
          {
            queue_obj->QueueFront = 0 ;
          }
        else{/*Nothing*/}

           /*empty*/
        if(1 == queue_obj->ElementCount)
        {
         queue_obj->QueueFront = -1 ;

         queue_obj->QueueRear = -1 ;
        }
        else{/*Nothing*/}

        (queue_obj->ElementCount)--;

        *ret_status = QUEUE_OK ;
        }
       return data_ptr;
    }
}
/**
*
*
*
*
*/
void *QueueFront(Queue_t *queue_obj, QueueStatus_t *ret_status)
{

    void * queue_data = NULL ;


    if((NULL == queue_obj) || (NULL == ret_status))
    {
        *ret_status =QUEUE_NULL_POINTER ;

        queue_data = NULL;
    }

    else
    {
        if(QueueIsEmpty(queue_obj))

        {
          *ret_status =QUEUE_EMPTY;

          queue_data = NULL;
        }

        else
        {
            queue_data = queue_obj->QueueArray[queue_obj->QueueFront] ;

            *ret_status = QUEUE_OK ;
        }

    }


    return queue_data;
}

/**
*
*
*
*
*/
void *QueueRear(Queue_t *queue_obj, QueueStatus_t *ret_status)
{
    void * queue_data = NULL ;


    if((NULL == queue_obj) || (NULL == ret_status))
    {
        *ret_status =QUEUE_NULL_POINTER ;

        queue_data = NULL;
    }

    else
    {
        if(QueueIsEmpty(queue_obj))

        {
          *ret_status =QUEUE_EMPTY;

          queue_data = NULL;
        }

        else
        {
            queue_data = queue_obj->QueueArray[queue_obj->QueueRear] ;

            *ret_status = QUEUE_OK ;
        }

    }


    return queue_data;
}

/**
*
*
*
*
*/
QueueStatus_t GetQueueCount(Queue_t *queue_obj, uint32 *QueueCount)
{
    QueueStatus_t status = QUEUE_NOK ;

    if((NULL == queue_obj) || (NULL == QueueCount))
    {

        status =QUEUE_NULL_POINTER ;

    }

 else
    {
        if(QueueIsEmpty(queue_obj))

        {
          status =QUEUE_EMPTY;

        }

        else
        {
           *QueueCount = queue_obj->ElementCount ;

           status = QUEUE_OK ;
        }

    }

    return status ;
}
/**
*
*
*
*
*/

QueueStatus_t DestroyQueue(Queue_t *queue_obj)
{
    QueueStatus_t status = QUEUE_NOK ;

    if(NULL == queue_obj)
    {

        status =QUEUE_NULL_POINTER ;

    }

 else
    {
        free(queue_obj->QueueArray);

        free(queue_obj);

        status =QUEUE_OK ;
    }

    return status ;
}
