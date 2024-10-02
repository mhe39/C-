#include <stdio.h>
#include <stdlib.h>

enum day{
  sat,
  sun,
  mon=16 ,
  tue,
  wed,
  thu,
  fri
};
enum day day1;

int main()
{

 day1  = tue;

printf("%d",day1);
    return 0;
}
