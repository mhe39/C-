#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char *names3[2]= {"Mohamed","Ahmed   "};
   unsigned char names_2D[2][20] = {"Mohamed","Ahmed"};

unsigned char **ptr6  =names3;

unsigned char(*ptr4)[2][20] = names_2D;

unsigned char *(*ptr5)[8] = names3 ;

printf("%c\n",*(ptr4[0][0])); // address of first element for the first array


printf("%c\n",*(ptr4[0][1])); // address of first element for the second array


printf("==============================\n");

printf("%s\n",*(*ptr5));
printf("%s\n",(*ptr5)[0]);
printf("%s\n",(*ptr5)[1]);
printf("%s\n",*(ptr5[0]+1));
printf("==============================\n");
printf("%s\n",ptr6[0]);


return 0 ;
}


