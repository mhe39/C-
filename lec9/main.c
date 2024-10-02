#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

unsigned int Std_IDs[5] = {0x11,
                           0x22,
                           0x33,
                           0x44,
                           0x55 };


unsigned char pass[5] ={'a','b','c','1','2'} ;
unsigned char userpass[5] ;



unsigned char STD_Names1[2] [10] = {{'a','h','m','e','d'},{'a','h','m','e','d'}};
unsigned char STD_Names2[2] [10] = {"Ahmed","Ahmed"};

void fun (unsigned char arr[][10] ,unsigned int arr_len ) ;
int main()
{
    /*

    unsigned int userpassindex =0 ;
    unsigned int passflag  =0 ;
    unsigned int Trails =0 ;

    while(Trails<3)
    {


    printf("please enter the password:") ;
    for(userpassindex=0;userpassindex<5;userpassindex++)

    {
         scanf("%c",&userpass[userpassindex]) ;
        fflush(stdin) ;                          // to clear the buffer of scanf("%c")
    }

    printf("\n") ;

    printf("please wait") ;

    for(userpassindex=0;userpassindex<15;userpassindex++)
    {
        printf(".") ;
        Sleep(100) ;
    }
    printf("\n") ;



    for(userpassindex=0;userpassindex<5;userpassindex++)

    {
        if(userpass[userpassindex]!= pass[userpassindex] )

        {
           passflag = 1 ;
            break ;
        }
    }

    if ( 1 == passflag )
    {
        passflag = 0 ;
        Trails++ ;
        printf("Invalid Pass !!!\n") ;
        printf("Enter the password again\n") ;
    }
    else
    {
        printf("Welcome\n") ;
        break ;
    }

    }
    */




    printf("%s\n",STD_Names1[0]) ;
    printf("%s\n",STD_Names2[0]) ;
    fun(STD_Names1,2);
    fun(STD_Names2,2);
return 0;
}




void fun (unsigned char arr[][10] ,unsigned int arr_len )
{
    unsigned int index ;

    for(index=0;index<arr_len;index++)
    {
        printf("%s\n",arr[index]) ;
    }


}
