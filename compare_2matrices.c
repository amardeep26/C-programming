#include<stdio.h>
int main(){
    int rows,columes,i,j,flag=1;
    printf("enter no. of rows :- ");
    scanf("%d",&rows);
    printf("enter no. of columes :- ");
    scanf("%d",&columes);
    int arr[rows][columes],brr[rows][columes];
    printf("enter element of 1st matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columes;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   printf("enter element of 2nd matrix\n");
   for(i=0;i<rows;i++){
    for(j=0;j<columes;j++){
        scanf("%d",&brr[i][j]);
    }
   }

   printf("\nelement of 1st matrix is \n");
   for(i=0;i<rows;i++){
    for(j=0;j<columes;j++){
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
   }
   printf("\nelement of 2nd matrix is \n");
   for(i=0;i<rows;i++){
    for(j=0;j<columes;j++){
        printf("%d\t",brr[i][j]);
    }
    printf("\n");

   }

   for(i=0;i<rows;i++){
    for(j=0;j<columes;j++){
        if(arr[i][j] == brr[i][j]){
            flag =0;
        }
    }
   }
   if(flag==0){
    printf("\nBoth matrices are equal\n");
   }
   else{
    printf("\nBoth matrices are equal\n");
   }

  return 0;

}