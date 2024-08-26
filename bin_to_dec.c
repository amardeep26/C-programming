


#include<stdio.h>

int main(){
    int num,rem,base=1,decimal=0,x;
    do{
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
        printf("enter '0' to end OR enter '1' to continue :- ");
        scanf("%d",&x);
    }while(x);
     return 0;
}
