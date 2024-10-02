#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned char name [30];

    unsigned int id;

    float deg ;

}student_t;
unsigned int file_counter,std_num=4 ;

unsigned int cnt ;

student_t student ;

FILE*ptr=NULL;

student_t *ptr_std = NULL;


int main()
{
    ptr_std = &student ;


    ptr=fopen("file.txt","w");


    for(file_counter=0;file_counter<2;file_counter++)
    {

        printf("enter std num %d details",file_counter);
        scanf("%d",&ptr_std->id);
                fflush(stdin);

        scanf("%f",&ptr_std->deg);
                fflush(stdin);

        gets(ptr_std->name);


        cnt = fprintf(ptr,"%d. Name: [%s]        - ID: [%d] - Degree :[%.2f]\n",file_counter+1,ptr_std->name,ptr_std->id,ptr_std->deg);

        printf("%d\n",cnt);


    }

    fclose(ptr);
    printf("\n============================\n");
    printf("%d\n",cnt);
    return 0;
}
