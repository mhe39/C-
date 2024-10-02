#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*



unsigned int counter = 0 ;
unsigned int *ptr ;

scanf("%d",&arr_size);

ptr =(unsigned int*) malloc (arr_size * sizeof(unsigned int));


for(counter=0 ; counter < arr_size;counter++)
{

ptr[counter] =

}

*/
//2D array

unsigned int row_counter = 0,col_counter = 0 ;

unsigned int **ptr ;
unsigned int num_rows ,num_col ;


int main()
{
printf("Enter the value for rows & cols");

    scanf("%d",& num_rows);
    scanf("%d",& num_col);

//scanf("%d",&num_rows);


ptr = (unsigned int **) malloc ((num_rows * sizeof(unsigned int * ))) ;/* pointer to pointer******important  this is pointer size giving that the arr contains addresses to rows*/

for(row_counter=0;row_counter<num_rows;row_counter++)
{

    ptr[row_counter] = (unsigned int*)malloc((num_col *sizeof(unsigned int))) ; /*pointer to int.......allocate memory to each row*/
}
/*
for(row_counter=0;row_counter<num_rows;row_counter++)
{
    printf("0x%X \n",ptr[row_counter]);
}
*/

for(row_counter=0;row_counter<num_rows;row_counter++)
{
    for(col_counter=0;col_counter< num_col;col_counter++)
{
    printf("Enter the value for pos %i %i",row_counter, col_counter);

    scanf("%d",& ptr [row_counter][col_counter]);
}
}

for(row_counter=0;row_counter<num_rows;row_counter++)
{
    for(col_counter=0;col_counter<num_col;col_counter++)
{
    printf("%d ",ptr[row_counter][col_counter]);

    printf("\t");
}

 printf("\n\n\n");
}

/*to free ptr in 2D array case we free the pointers of the array (members...ptr[row_counter]) then free the pointer to the array itself----> ptr*/

/*loop to free pointers of array*/

for(row_counter=0;row_counter<num_rows;row_counter++)
{
    free(ptr[row_counter]) ;
}

free(ptr);

return 0;
}



/*

for(row_counter=0;row_counter<num_rows;row_counter++)
{

    ptr[row_counter] = (unsigned int*)malloc(((num_col+row_counter) *sizeof(unsigned int))) ; /*pointer to int.......allocate memory to each row*/
}


for(row_counter=0;row_counter<num_rows;row_counter++)
{
    for(col_counter=0;col_counter<(num_col+row_counter);col_counter++)
{
    printf("Enter the value for pos %i %i",row_counter, col_counter);

    scanf("%d",& ptr [row_counter][col_counter]);
}
}


/*for different col_num in rows*/

/*

for(row_counter=0;row_counter<num_rows;row_counter++)
{
    for(col_counter=0;col_counter<(num_col+row_counter);col_counter++)
{
    printf("%d ",ptr[row_counter][col_counter]);

    printf("\t");
}

 printf("\n\n\n");
}

*/
