#include <stdio.h>
#include <stdlib.h>


typedef unsigned int unit32;

typedef unit32(*(*arr_ptr)[4])(void); // important

typedef unit32 (*pptr)(void); /**important***/




unit32 fun1 (void) ;
unit32 fun2 (void) ;
unit32 fun3 (void) ;
unit32 fun4 (void) ;

//pptr (*temp_ptr)[4]; /*important*/

typedef pptr (*ptr_Array4PF)[4];    /*important*/

 //unit32 (*(*my_fun(void))[4])(void);

  pptr fun_ptr[4] ={fun1,fun2,fun3,fun4};

//unit32(*fun_ptr[4])(void)={fun1,fun2,fun3,fun4};
ptr_Array4PF my_fun (void) ;

int main()
{


  //unit32 (*(*ptr(void))[4])(void);        /* ptr is a void function returning a pointer to a 4 element size array with every element is a pointer to function that takes void and returns int */

  //unit32(*(*ptr2)[4])(void);

  //arr_ptr ptr2 ; or ptr_Array4PF ptr2 /*Important*/
  ptr_Array4PF ptr2;

  ptr2 = my_fun();



  printf("%d\n",(*fun_ptr[0])());/*array of pointer to functions*/
  printf("%d\n",(*fun_ptr[1])());
  printf("%d\n",(*fun_ptr[2])());
  printf("%d\n",(*fun_ptr[3])());
/************************************************/
 printf("%d\n",(*ptr2)[0]());   /*pointer to array of size 4 and has pointers to functions as members*/
 printf("%d\n",(*ptr2)[1]());
 printf("%d\n",(*ptr2)[2]()) ;
 printf("%d\n",(*ptr2)[3]());
return 0;
}

unit32 fun1 (void)
{

return 11;
}
unit32 fun2 (void)
{

return 22;
}
unit32 fun3 (void)
{

return 33;
}
unit32 fun4 (void)
{

return 44;
}

/*important*/
 ptr_Array4PF my_fun (void)
 {
     //unit32(*(*local_ptr)[4])(void) = &fun_ptr ;  /*so important */
          ptr_Array4PF local_ptr;
           local_ptr= &fun_ptr ;
             return(local_ptr);
 }

