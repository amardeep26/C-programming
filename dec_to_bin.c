 #include<stdio.h>
int main(){
    int n;
    printf("enter any decimal no. :- ");
    scanf("%d",&n);
    int rem;
    int a[n];
    if(n==0){
        printf("0");
    }
    printf("Decimal %d in Binary ",n);
    
    int i=0;
    while(n!=0){
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    
    return 0;
}