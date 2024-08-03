#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("enter digit :-");
    scanf("%d\n",&n);
    int r=0;
    while (n>0)
    {
        r=n%10;
        sum=sum*10(n%10);
        n=n/10;
    }
     n=sum;
    while(n>0){
        r=n%10;
    
    switch(r){
            case '1':
            printf("one\n");
            break;
            case '2':
            printf("two\n");
            break; 
            case '3':
            printf("three\n");
            break;
            case '4':
            printf("four\n");
            break;
            case '5':
            printf("five\n");
            break;
            case '6':
            printf("six\n");
            break;
            case '7':
            printf("siven\n");
            break;
            case '8':
            printf("eignt\n");
            break;
            case '9':
            printf("nine\n");
            break;
            default:
            printf("Greater then 9\n");
            
        }
      n=n/10;
    }  
    return 0;
}
