#include<stdio.h>
int main(){
    int n;
    printf("enter digit :-");
    scanf("%d\n",&n);
    
    switch(n){
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
    return 0;
}
