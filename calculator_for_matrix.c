#include<stdio.h>


int main (){
    int n,m,p,q,i,j,flag=0;
    
    int option,n;
    do{
    
    printf("\nenter 1 for addition of Two matrix -\n enter 2 for sub of Two matrix - \n enter 3 for multipication of Two matrix- \n");
    scanf("%d",&option);
    
    
     switch (option)
     {
     case '1': 
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
       

                            break;}
        
     case '2':

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

      
      break;}

      case '3' :
        int i,j,rows_1,col_1,rows_2,col_2,flag=1;
         printf("Enter number of rows and columns of matrix 1\n");
         scanf("%d %d",&rows_1,&col_1);
         printf("Enter number of rows and columns of matrix 2\n");
          scanf("%d %d",&rows_2,&col_2);

         int a1[rows_1][col_1],a2[rows_2][col_2];

           if(rows_1==rows_2&&col_1==col_2)
        {
  //Taking input for 1st matrix
     printf("Enter Matrix 1\n");
     for(i=0;i<rows_1;i++)
    {
    for(j=0;j<col_1;j++)
    {
   scanf("%d",&a1[i][j]);
    }
     }
     //Taking input for 2nd matrix
      printf("Enter Matrix 2\n");
     for(i=0;i<rows_2;i++)
    {
    for(j=0;j<col_2;j++)
    {
   scanf("%d",&a2[i][j]);
    }
    }

    //Printing given matrices
     printf("Matrix 1  is\n");
     for(i=0;i<rows_1;i++)
    {
    for(j=0;j<col_1;j++)
    {
   printf("%d\t",a1[i][j]);

    }
    printf("\n");
    }

    printf("Matrix 2  is\n");
     for(i=0;i<rows_2;i++)
    {
    for(j=0;j<col_2;j++)
    {
   printf("%d\t",a2[i][j]);
    }
    printf("\n");
    }
      //Comparing of matrix
    for(i=0;i<rows_1;i++)
    {
     for(j=0;j<col_1;j++)
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

}
            
       
       break;}
      
      default: 
       printf("worng option \n");
    
      }
      printf("enter 1 for end and enter 0 for continue ");
    scanf("%d",&n);
     if(n==0){
         flag=1;
     }
     else{
         flag=0;
     }
    }  while(flag);
    
    
     return 0;
}
