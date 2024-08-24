#include<stdio.h>
#include<math.h>

int main (){
    int a,b,flag=1,x;
    char option;

    do{
    printf("\nenter '1' for add -\n enter '2' for sub - \n enter '3' for multipication - \n");
    printf(" enter '4' for divison-\n enter '5' for roots-\n enter '6' for square-\n enter '7' for table - \n ");
        printf("enter '8' for arranging num in ascending order\n enter '9' for arranging num in decreasing order\n");
        printf("enter '10' for find max and min in number \n");
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
         case '8' :{
         int i,*ptr,max;
              printf("Enter number of values\n");
              scanf("%d",&max);
               int num[max];
                printf("Enter values for array\n");
               for(i=0;i<max;i++)
            {
                   scanf("%d",&num[i]);
              }

               ptr=&num[0];//you can also write ptr=num both are same

                 printf("Values printed by incrementing pointer\n");
                  for(i=0;i<max;i++)
                     {
                printf("%d\n",*ptr);
                         ptr++;
                       }
             break;
                }

         case '9' :
             {
               int i,*ptr,max;
                printf("Enter number of values\n");
               scanf("%d",&max);
             int num[max-1];
               printf("Enter values for array\n");
          for(i=0;i<max;i++)
         {
               scanf("%d",&num[i]);
         }

          ptr=&num[max-1];
 
            printf("Values printed by decrementing pointer\n");
           for(i=0;i<max;i++)
             {
                 printf("%d\n",*ptr);
                ptr--;
                }
                 break;
            }

         
         case '10' :{
    int i,size,max=0,min=0;
    printf("Enter size to find largest and smallest of given numbers\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter numbers in array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
          max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The largest number is %d\n",max);
    printf("The smallest number is %d\n",min);


             break;
         }
      default: 
       printf("worng option \n");
    
      }
    printf("enter '0' for End and enter '1' for Continue ");
    scanf("%d",&x);
    if(x==1){
        flag=1;
    }
    else{
        flag=0;
    }
}while(flag);
    
     return 0;
}
