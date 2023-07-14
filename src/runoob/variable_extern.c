#include <stdio.h>

int count ;
extern void write_extern();

int main_4()
{
   count = 5;
   write_extern();

   return count;

}

