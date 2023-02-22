#include <cs50.h>
#include <stdio.h>

int main(void) {
   int start;
  do
  {
 start = get_int("How many llamas are we starting with?\n Please pick more than 9:  \n") ;
  }
  while (start < 9);

int end;
do
{
    end = get_int("How many llamas will you want to end up with ?:\n ");
}
while (end < start);

int i;

 for ( i = 0; start < end; i++)
    {
             start= start + (start/3) - (start/4) ;
    }
 printf("To reach your goal it would take this many years: %i\n", i);
}
