#include<stdio.h>
int main(){
   int n,m,x;
   do{
   printf("enter no. of rows-");
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
printf("\nAfter transpose of above matrix\n");
  for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
      printf("%d ",brr[i][j]);
   }
   printf("\n");
  }
      printf("enter '0' to exit OR enter '1' to continues transpose :- ");
      scanf("%d",&x);
   }while(x);
  return 0;

}
