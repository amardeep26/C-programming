#include<stdio.h>
int main(){
    int n,m,i,j,p,q,x;
   do{
    printf("enter no. of rows:- ");
    scanf("%d",&m);
    printf("enter no. of columns:- ");
    scanf("%d",&n);
    
      int a1[m][n];
    printf("enter matrix 1st \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    
        printf("enter no. of rows :- ");
        scanf("%d",&p);
        
        printf("enter no. of columns :- ");
        scanf("%d",&q);
        
        int a2[p][q], mult[m][q];
        if(n!=p){
            printf("\nerror\n");}
        else{    
            printf("enter matrix 2nd \n ");
            for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&a2[i][j]);
               }
            }
       
           for(i=0;i<m;i++){
              for(j=0;j<q;j++){
                int sum;
                 for (int k=0;k<n;k++){
                   sum+= a1[i][k] * a2[k][j];
                 }
                     mult[i][j]=sum;
                     sum=0;
                  }
              }  
 
         }
    printf("\nelement of 1st matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a1[i][j]);
            }
          printf("\n");
        }   

     printf("\nelement of 2st matrix\n");
     for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",a2[i][j]);
            }
          printf("\n");
        }   
            
    printf("\nmultiplication of matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
         printf("enter '1' to continue OR '0' to exist :- ");
          scanf("%d",&x);  
 }while(x);
        
    return 0;
}
