


#include<stdio.h>

int main(){
    int num,rem,base=1,decimal=0;
    printf("enter binary digits :- ");
     scanf("%d",&num);
     int bin=num;
     while ( num > 0)  
    {  
        rem = num % 10; 
        decimal = decimal + rem * base;  
        num = num / 10;  
        base = base * 2;  
    }  
     printf("\nIn decimal %d is %d\n",bin,decimal);
     return 0;
}
