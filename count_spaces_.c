#include<stdio.h>
#include<string.h>

int main(){
      int i,space=0;
      char str[100];
      printf("Enter a sentance :- ");
      fgets(str,100,stdin);

      for(i=0;i<strlen(str);i++){

        if(str[i] == ' '){
             space++;
        }
      }
      printf("Number of spaces in above sentance is %d \n",space);
      return 0;
}