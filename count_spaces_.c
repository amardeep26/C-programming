#include<stdio.h>
#include<string.h>

int main(){
      int i,space=0,x;
      char str[100];
      do{
      printf("Enter a sentance :- ");
      fgets(str,100,stdin);

      for(i=0;i<strlen(str);i++){

        if(str[i] == ' '){
             space++;
        }
      }
      printf("Number of spaces in above sentance is :- %d \n",space);
      printf("press '0' to end OR press '1' to continue :- ");
            scanf("%d"&x);
      }while(x);
      return 0;
}
