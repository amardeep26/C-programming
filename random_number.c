//------------: PRINT RANDM NUMBER :----------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    
   srand(time(0));
 
   int number1 = (rand() % 100) + 1;
   int number2 = (rand() % 100) + 1;
   int number3 = (rand() % 100) + 1;


   
    printf("\nRANDM NUMBER From 0 to 100 :- \n");
   

   printf("\n%d\n", number1);
   printf("\n%d\n", number2);
   printf("\n%d\n", number3);
    
    
   return 0;
}