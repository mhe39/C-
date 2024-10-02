#include <stdio.h>
#include <stdlib.h>

void *my_memset(void *StartAddress, unsigned char Value, unsigned int Length);

void *my_memcpy(void *DestAddress, const void * SourceAddress, unsigned int Length);

int my_memcmp(const void *FMemAddress, const void *SMemAddress, unsigned int Length) ;


char name_1[30]="Mohamed";

char name_2[30];

char name_3 [5] = {1,2,2,4,5};

char name_4 [5] = {1,2,5,4,5};

int main()
{/*
    my_memcpy(name_2,name_1,30);

    printf("%s\n",name_2);

    printf("%s\n",name_1);

    my_memset(name_1,'*',30);

    my_memcpy(name_2,name_1,30);

    printf("%s\n",name_1);

    printf("%s\n",name_2);
    */

    int ReturnState = my_memcmp(name_3,name_4,5);
    printf("ReturnState = %d\n",ReturnState);

    return 0;
}


void *my_memset(void *StartAddress, unsigned char Value, unsigned int Length)
{
    unsigned char *TempPtr = StartAddress; // in order to keep the original address and escape from explicit casting of void pointer

    if (NULL == StartAddress)
    {
      printf("Memset failed due to a Null pointer !!! \n");
    }

    else
    {

        while(Length--)
        {
            *TempPtr = Value ;
            TempPtr++;
            /** OR TempPtr++ */
        }
    }

    return StartAddress;

}

void *my_memcpy(void *DestAddress, const void * SourceAddress, unsigned int Length)
{
    unsigned char *TempPtr1 =SourceAddress;

    unsigned char *TempPtr2 =DestAddress;

    if((NULL == DestAddress) || (NULL == SourceAddress) )
    {
        printf("Memcpy failed due to a Null pointer !!! \n");
    }

    else
    {
        while(Length--)
        {
            *TempPtr2++ = *TempPtr1++;
            /* TempPtr2++;
             TempPtr1++;*/
        }
    }


    return DestAddress ;
}


int my_memcmp(const void *FMemAddress, const void *SMemAddress, unsigned int Length)
{
    unsigned char *TempFMemAddress =FMemAddress;

    unsigned char *TempSMemAddress =SMemAddress;

     int ReturnState = 0 ; /*Equal*/

    if((NULL == TempSMemAddress) || (NULL == TempFMemAddress) )
    {
        printf("MemCmp failed due to a Null pointer !!! \n");
    }

    else
    {

            if(TempFMemAddress == TempSMemAddress)
            {
                return ReturnState; /* indicates that the two strings are equal*/
            }

            else
            {
               while(Length--)
               {
                 if(*TempFMemAddress != *TempSMemAddress)
                 {
                     ReturnState = (*TempFMemAddress < *TempSMemAddress)? -1 : 1 ; /*-1 for Fmem smaller than Smem and 1 for Fmem bigger*/

                   break ;
                 }
                 else
                 {
                 TempFMemAddress++;
                 TempSMemAddress++;
                 }

               }

            }

    }

    return ReturnState ;
}
