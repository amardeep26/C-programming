

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int pre,x,sum,count=0,total;
    int bonus=10;
    printf(" \n\n  you have '10' Bonus score, so enjoy your game ");
    do{
   printf(" \n\n\n------------:GUEESE THE SUM OF THREE DICE:------------\n\n\n ");
   printf("     If The Sum Is :- Between '0' TO '6' (include 6) Press '0' :-\n\n ");
   printf("     If The Sum Is :- Between '6' TO '12' (include 12) Press '1' :-\n\n ");
   printf("     If The Sum Is :- Between '12' TO '18' (include 18) Press '2' :-\t");
   scanf("%d",&pre);
   // Use current time as a seed for random # generator
   srand(time(0));
 
   int number1 = (rand() % 6) + 1;
   int number2 = (rand() % 6) + 1;
   int number3 = (rand() % 6) + 1;


    sum =number1 + number2 + number3 ;
    
    if( pre==2) {
        if(sum>=13 && sum<=18){
        printf("\n\n:--Congratulations:--\n\n ");
        count++;
        }
        if(sum>=7 && sum<=12){
            printf("\nyou loss\n");
             bonus--;
        }
        if(sum>=0 && sum<=6){
            printf("\nyou loss\n");
             bonus--;
        }
    }
    
    
    else if(pre==1){
        if(sum>=7 && sum<=12){
        printf("\n\n:--Congratulations:--\n\n ");
        count++;
        }
        if(sum>=13 && sum<=18){
            printf("\nyou loss\n");
             bonus--;
        }
        if(sum>=0 && sum<=6){
            printf("\nyou loss\n");
             bonus--;
        }
    }
    else{
          if(sum>=0 && sum<=6){
        printf("\n\n:--Congratulations:--\n\n ");
        count++;
          }
         if(sum>=7 && sum<=12) {
             printf("\nyou loss\n");
             bonus--;
         }
         if(sum>=13 && sum<=18){
             printf("\nyou loss\n");
             bonus--;
         }
    }
    
    


   printf("\nDice 1:- %d\n", number1);
   printf("\nDice 2:- %d\n", number2);
   printf("\nDice 3:- %d\n", number3);
    
      printf("\n\n   your score is :-  %d\n\n",count);
     if(bonus <= 4){
        printf("  \n\n  You have only '%d' Bonus score left, so play carefully your GaMe\n\n",bonus);
     }
        else{
            printf("you have '%d' Bonus score, so enjoy your game ",bonus);
        }
         
    }while (count);
    // count=total;
    //  printf("\n\n           your total score is  > - -   %d\n\n",total);
    
   return 0;
}
