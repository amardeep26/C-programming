#include<stdio.h>


int main ()
{
    int n,m,p,q,i,j,flag=0;
    
    int option,x;
    //do{
    
    printf("\nenter '1' for addition of Two matrix -\n enter '2' for sub of Two matrix - \n enter '3' for Comparing of Two matrix- \n enter '4' for transpose of matrix -\n ");
    printf("enter '5' for multiplication of two matrix\n ")
    scanf("%d",&option);
    
    
     switch (option)
  {     
     
     case '1': 
         {
         
     printf("Enter number of rows\n");
      scanf("%d",&n);
     printf("Enter number of columns\n");
      scanf("%d",&m);

      int a1[n][m],a2[n][m],add[n][m];
 
      printf("Enter Matrix 1\n");
 
       for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
        {
          scanf("%d",&a1[i][j]);
         }
     }
   
      printf("Enter Matrix 2\n");
       for(i=0;i<n;i++)
        {
           for(j=0;j<m;j++)
          {
             scanf("%d",&a2[i][j]);
            }
        }
        //addition
       for(i=0;i<n;i++)
        {
           for(j=0;j<m;j++)
           {
           add[i][j]=a1[i][j]+a2[i][j];
           }
        }
           printf("\nmatrix 1st\n");
           for(i=0;i<n;i++){
              for(j=0;j<m;j++){
                printf("%d\t",a1[i][j]);
              }
              printf("\n");
            }

             printf("\nmatrix 2st\n");
             for(i=0;i<n;i++){
                 for(j=0;j<m;j++){
                     printf("%d\t",a2[i][j]);
                    }
                        printf("\n");
                  }

                     printf("\nAddition of above matrices is\n");

                       for(i=0;i<n;i++)
                       {
                            for(j=0;j<m;j++)
                          {
                             printf("%d\t",add[i][j]);
                            }
                               printf("\n");
                         }
       

                            break;
             }
        
     case '2':
         {

        printf("Enter number of rows\n");
      scanf("%d",&n);
     printf("Enter number of columns\n");
      scanf("%d",&m);

      int a1[n][m],a2[n][m],add[n][m];
 
      printf("Enter Matrix 1\n");
 
       for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
        {
          scanf("%d",&a1[i][j]);
         }
     }
   
      printf("Enter Matrix 2\n");
       for(i=0;i<n;i++)
        {
           for(j=0;j<m;j++)
          {
             scanf("%d",&a2[i][j]);
            }
        }
        //substraction of two matrix
       for(i=0;i<n;i++)
        {
           for(j=0;j<m;j++)
           {
           add[i][j]=a1[i][j]-a2[i][j];
           }
        }
           printf("\nmatrix 1st\n");
           for(i=0;i<n;i++){
              for(j=0;j<m;j++){
                printf("%d\t",a1[i][j]);
              }
              printf("\n");
            }

             printf("\nmatrix 2st\n");
             for(i=0;i<n;i++){
                 for(j=0;j<m;j++){
                     printf("%d\t",a2[i][j]);
                    }
                        printf("\n");
                  }

                     printf("\nSubstraction of above matrices is\n");

                       for(i=0;i<n;i++)
                       {
                            for(j=0;j<m;j++)
                          {
                             printf("%d\t",add[i][j]);
                            }
                               printf("\n");
                         }

      
      break;
         }

      case '3' :
          {
        
              int flag=1;
         printf("Enter number of rows and columns of matrix 1\n");
         scanf("%d %d",&m,&n);
         printf("Enter number of rows and columns of matrix 2\n");
          scanf("%d %d",&p,&q);

         int a1[m][n],a2[p][q];

           if(m==p && n==q)
        {
  //Taking input for 1st matrix
     printf("Enter Matrix 1\n");
     for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
   scanf("%d",&a1[i][j]);
    }
     }
     //Taking input for 2nd matrix
      printf("Enter Matrix 2\n");
     for(i=0;i<p;i++)
    {
    for(j=0;j<q;j++)
    {
   scanf("%d",&a2[i][j]);
    }
    }

    //Printing given matrices
     printf("Matrix 1  is\n");
     for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
   printf("%d\t",a1[i][j]);

    }
    printf("\n");
    }

    printf("Matrix 2  is\n");
     for(i=0;i<p;i++)
    {
    for(j=0;j<q;j++)
    {
   printf("%d\t",a2[i][j]);
    }
    printf("\n");
    }
      //Comparing of matrix
    for(i=0;i<m;i++)
    {
     for(j=0;j<q;j++)
     {
     if(a1[i][j]!=a2[i][j])
     {
        flag=0;
        }
     }
    }

    if(flag==1)
    {
     printf("Both matrices are equal\n");
    }
    else
    {
     printf("Both matrices are not equal\n");
    }


 }
 else
 {
  printf("Matrices Can not be compared\n");
 }
    break;
}
            

case '4' : {
    
   printf("enter no. 0f rows-");
   scanf("%d",&n);
   printf("enter no. of columes-");
   scanf("%d",&m);

   int arr[n][m],brr[m][n];
  printf("\nenter matrix\n");
  for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
      scanf("%d",&arr[i][j]);
   }
  }
  
  for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
      brr[j][i] = arr[i][j];
   }
   }//int temp=m;
  //     m=n;
  //     n=temp;

  for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
      printf("%d ",brr[i][j]);
   }
   printf("\n");
  }
    break;
}
      case '5' : 
     {
                printf("enter no. of rows:- ");
    scanf("%d",&n);
    printf("enter no. of columns:- ");
    scanf("%d",&m);
    
      int a1[n][m];
    printf("enter matrix 1st \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a1[i][j]");
        }
    }
    do{
        printf("enter no. of rows :- ");
        scanf("%d",&p);
        
        printf("enter no. of columns :- ");
        scanf("%d",&q);
        
        int a2[p][q], mult[n][q];
        if(m!=p){
            printf("\nerror\n");}
        else{    
            printf("enter matrix 2nd \n ");
            for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&a2[i][j]");
            }
        }
       
       for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            int sum;
            for (int k=0;k<m;k++){
                sum+= a1[i][k] * a2[k][j];
            }
            mult[i][j]=sum;
            sum=0;
        }
 
    }
    printf("\nelement of 1st matrix\n);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",a1[i][j]");
            }
        }   

     printf("\nelement of 2st matrix\n);
     for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d",a2[i][j]");
            }
        }   
            
    printf("\nmultiplication of matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            printf("%d\t",mult[i][j]");
        }
        printf("\n");
    }

         
          break;
      }
      default: {
       printf("worng option \n");
    
      }
}          
    //   printf("enter 1 for end and enter 0 for continue ");
    // scanf("%d",&n);
    //  if(n==0){
    //      flag=1;
    //  }
    //  else{
    //      flag=0;
    //  }
    // }  while(flag);
    
    
     return 0;
}
