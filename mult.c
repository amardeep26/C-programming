#include<stdio.h>
int main(){
    int n,m,i,j,p,q,flag=1;
   
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
 //       }  int x;
 //           printf("enter '1' to continue addition in above matrix OR '0' to exist :- ");
 // scanf("%d",&x);  
 //            while(flag);
 //        }
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
    return 0;
}
