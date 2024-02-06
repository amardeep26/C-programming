#include<stdio.h>
#include<math.h>

int main (){
    int a,b;
    char option,n;
    // printf("enter 0 for end and enter 9 forcontinue ");
    // scanf("%c",&n);
    printf("\nenter 1 for add -\n enter 2 for sub - \n enter 3 for multipication - \n");
    printf(" enter 4 for divison-\n enter 5 for roots-\n enter 6 for square-\n enter 7 for table - \n ");
    scanf("%c",&option);
    
    
     switch (option)
     {
     case '1': 
       {printf("enter a no. ");
       scanf("%d",&a);
       printf("enter a no. ");
       scanf("%d",&b);
       printf("addition is - %d\n",a+b);
        break;}
        
     case '2':
      { printf("enter a no. ");
       scanf("%d",&a);
       printf("enter a no. ");
       printf("sub -%d",a-b);
       scanf("%d\n",&b);
      break;}

      case '3' :
       {printf("enter a no. ");
       scanf("%d",&a);
       printf("enter a no. ");
       scanf("%d",&b);
       printf("multipication is %d\n",a*b);
       break;}
      case '4' :
       { printf("enter a no. ");
       scanf("%d",&a);
       printf("enter a no. ");
       scanf("%d",&b);
       printf("remander is %d\n",a%b);
       printf("quadrant is %d\n",a/b);
       break;  }
      case '5' :
       {
       printf("enter a no. ");
       scanf("%d",&a);
       printf("roots of %d is %f ",a,sqrt(a));
       break;}
      case '6' :
       {printf("enter a base ");
       scanf("%d",&a);
       printf("enter a power ");
       scanf("%d",&b);
       int p;
       p=pow(a,b);
       printf("\nsquare of %d and %d is %d\n",a,b,p);
       break;}
      case '7' :
       {printf("\n enter a no. ");
       scanf("%d",&a);
       for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",i,a,i*a);
       }
       break;}
      default: 
       printf("worng option \n");
    
      }
    
     return 0;
}
