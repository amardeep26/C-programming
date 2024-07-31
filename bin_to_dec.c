// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int rem;
//     int a[n];
//     if(n==0){
//         printf("0");
//     }
//     printf("%d in binary\n",n);
    
//     int i=0;
//     while(n!=0){
//         rem=n%2;
//         n=n/2;
//         a[i]=rem;
//         i++;
//     }
    
//     for(int j=i-1;j>=0;j--){
//         printf("%d",a[j]);
//     }
    
//     return 0;
// }


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
