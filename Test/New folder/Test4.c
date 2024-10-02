#include<stdio.h>
void reverse(int i);
int main()
    {
       char x = 8;

       short int y = 10 ;

       printf("%d\n%d\n%d\n",sizeof(x),sizeof(y),sizeof(x+y));

   
        reverse(1);
    
    
    return 0 ;
    }

    void reverse(int i)
    {
        if (i > 5)
            return ;
        printf("%d ", i);
        return reverse((i++, i));
    }
