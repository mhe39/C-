#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
  unsigned int number;

  float rating ;

  unsigned char name [30];

}player_t;
/**************************************************/
void fetch_data (player_t* player_ptr,unsigned char *ptr);
void print_data(player_t* player_ptr);

player_t player1 ;


unsigned char arr[54];

unsigned int  counter;


int main()
{

FILE *my_file= NULL ;

my_file = fopen("file.txt","r");

if(NULL!=my_file)
{

for (counter =0 ; counter <2 ; counter++ )
{


    fgets(arr,80,my_file);

    printf("%d\n",sizeof(player1));

   fetch_data(&player1,arr);

}

}

else
{
printf("Eror!!!");
}



fclose(my_file);



    return 0;
}


void fetch_data (player_t* player_ptr_temp,unsigned char *ptr)
{
unsigned char player_num_str[3] = {0} ;
unsigned char player_raintg_str[4] = {0} ;
unsigned char player_name_str[31] = {0} ;

strncpy(player_num_str,ptr+59,2);
strncpy(player_raintg_str,ptr+74,3);
strncpy(player_name_str,ptr+10,30);
/*
printf("NUM==> %s\n",player_num_str);
printf("Rating>>>>=> %s\n",player_raintg_str);
printf("Name>>>>=> %s\n",player_name_str);
*/
player_ptr_temp->number= atoi(player_num_str);
strcpy(player_ptr_temp->name,player_name_str);
player_ptr_temp->rating= atof(player_raintg_str);

print_data(player_ptr_temp);

}


void print_data(player_t* data_ptr)
{
printf("========================\n");

printf("Name    ===> %s\n",data_ptr -> name);


printf("Number  ===> %d\n",data_ptr -> number);


printf("Rating  ===> %0.2f\n",data_ptr -> rating);

printf("========================\n");
}
