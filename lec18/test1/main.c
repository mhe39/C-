#include "QueueArray.h"


 uint32 Queue1_MaxSize = 0,QueueEleNum=0 ;

Queue_t *queue1 = NULL ;

void* queue_ret_data = NULL;



QueueStatus_t QueueReturnStatus =QUEUE_NOK;


uint32 var1= 0x11, var2=0x22, var3=0x33, var4=0x44, var5=0x55;


int main()
{
    printf("Please, Enter queue size : ");

    scanf("%d",&Queue1_MaxSize);






    queue1 = CreateQueue(Queue1_MaxSize,&QueueReturnStatus);

    if(NULL == queue1)
    {
        printf("Null pointer error..... can't create the queue!!! \n ");
    }

    else
    {
        printf("Queue got created successfully\n");
    }

    printf("0x%X\n",queue1);


    QueueReturnStatus = EnqueueElement(queue1,&var1); printf("===>> %d\n",QueueReturnStatus);
    QueueReturnStatus = EnqueueElement(queue1,&var2); printf("===>> %d\n",QueueReturnStatus);
    QueueReturnStatus = EnqueueElement(queue1,&var3); printf("===>> %d\n",QueueReturnStatus);
    QueueReturnStatus = EnqueueElement(queue1,&var4); printf("===>> %d\n",QueueReturnStatus);
    QueueReturnStatus = EnqueueElement(queue1,&var5); printf("===>> %d\n",QueueReturnStatus);
   printf("============================\n");

   GetQueueCount(queue1,&QueueEleNum);printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_EMPTY == QueueReturnStatus)
        {
          printf("Queue is empty !!!!!\n");
          }

      else{
          printf("Number of queue elements = %d\n",QueueEleNum);
          }


    printf("============================\n");
    queue_ret_data = DequeueElement(queue1,&QueueReturnStatus); printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_EMPTY == QueueReturnStatus)
        {
          printf("Queue is empty !!!!!\n");
          }

      else{
          printf("Dequeued value = 0x%X\n",*((uint32*)queue_ret_data));
          }


        printf("============================\n");

          queue_ret_data = QueueFront (queue1,&QueueReturnStatus);printf("===>> %d\n",QueueReturnStatus);

          printf("front =====> 0x%X\n",*(uint32*)queue_ret_data);


          queue_ret_data = QueueRear(queue1,&QueueReturnStatus);printf("===>> %d\n",QueueReturnStatus);

          printf("rear =====> 0x%X\n",*(uint32*)queue_ret_data);


    printf("============================\n");

             GetQueueCount(queue1,&QueueEleNum);printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_EMPTY == QueueReturnStatus)
        {
          printf("Queue is empty !!!!!\n");
          }

      else{
          printf("Number of queue elements = %d\n",QueueEleNum);
          }

   printf("============================\n");

    queue_ret_data = DequeueElement(queue1,&QueueReturnStatus); printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_EMPTY == QueueReturnStatus)
        {
          printf("Queue is empty !!!!!\n");
          }

      else{
           printf("Dequeued value = 0x%X\n",*((uint32*)queue_ret_data));
          }


    queue_ret_data = DequeueElement(queue1,&QueueReturnStatus); printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_EMPTY == QueueReturnStatus)
        {
          printf("Queue is empty !!!!!\n");
          }

      else{
           printf("Dequeued value = 0x%X\n",*((uint32*)queue_ret_data));
          }


    queue_ret_data = DequeueElement(queue1,&QueueReturnStatus); printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_EMPTY == QueueReturnStatus)
        {
          printf("Queue is empty !!!!!\n");
          }

      else{
           printf("Dequeued value = 0x%X\n",*((uint32*)queue_ret_data));
          }


    queue_ret_data = DequeueElement(queue1,&QueueReturnStatus); printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_EMPTY == QueueReturnStatus)
        {
          printf("Queue is empty !!!!!\n");
          }

      else{
          printf("Dequeued value = 0x%X\n",*((uint32*)queue_ret_data));
          }

    queue_ret_data = DequeueElement(queue1,&QueueReturnStatus); printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_EMPTY == QueueReturnStatus)\
        {
          printf("Queue is empty !!!!!\n");
          }

      else{
           printf("Dequeued value = 0x%X\n",*((uint32*)queue_ret_data));
          }


   GetQueueCount(queue1,&QueueEleNum);printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_EMPTY == QueueReturnStatus)
        {
          printf("Queue is empty !!!!!\n");
          }

      else{
          printf("Number of queue elements = %d\n",QueueEleNum);
          }



DestroyQueue(queue1);printf("===>> %d\n",QueueReturnStatus);
        if(QUEUE_NULL_POINTER == QueueReturnStatus)
          {
          printf("Null pointer !!!!!\n");
          }

      else
          {
          printf("Queue Destroyed successfully\n",QueueEleNum);
          }

    return 0;
}
