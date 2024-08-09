#include<stdio.h>
#include<string.h>

int main(){
   char str1[100],str2[100]={0};
   int i,j=0;
   printf("enter string :- \n");
   gets(str1);

   for(i=strlen(str1)-1;i>=0;i--){
    str2[j]=str1[i];
    j++;
   }
   str2[j]='\0';

   if(strcmp(str1,str2)==0){
    printf("the given string is Palindrome\n");
   }
   else{
    printf("the given string is not palindrome\n");
   }
   return 0;
}