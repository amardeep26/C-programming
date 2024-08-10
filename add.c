
#include<stdio.h>
int main()
{
 int i,j,n,m , x,flag=1;
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
  
  do{
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
 printf("enter '1' to continue addition in above matrix OR '0' to exist :- ");
 scanf("%d",&x);
 if (x==1){
     flag=1;
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             a1[i][j]=add[i][j];
             add[i][j]=0;
         }
     }
 }
 else{
     flag=0;
 }
  }while(flag);
  
  printf("\n the final addition is :- \n");
  for(i=0;i<n;i++){
      for(j=0;j<m;j++){
          printf("%d ",add[i][j]);
      }
      printf("\n");
  }
 return 0;
}
