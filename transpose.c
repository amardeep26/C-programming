#include<stdio.h>
int main(){
   int n,m;
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
  }int temp=m;
      m=n;
      n=temp;

  for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
      printf("%d ",brr[i][j]);
   }
   printf("\n");
  }

  return 0;

}