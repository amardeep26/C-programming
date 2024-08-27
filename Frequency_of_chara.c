#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0,count[26]={0},x,y;
    char str1[100];
    do{
    printf("Enter a sentence\n");
    fgets(str1,100,stdin);

    while(str1[k]!='\0')
    {
        if(str1[k]>='a'&&str1[k]<='z')
        {
            x=str1[k]-'a';
            count[x]++;
        }
        if(str1[k]>='A'&&str1[k]<='Z')
        {
           x=str1[k]-'A';
            count[x]++;
        }
        k++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            printf("%c occured %d times\n",i+'a',count[i]);
        }

    }
        printf("enter '0' to exit OR enter '1' to continoue");
        scanf("%d",&y);
    }while(y);
    return 0;

}
