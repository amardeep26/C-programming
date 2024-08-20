#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,size,max;
 printf("Enter size of array\n");
 scanf("%d",&size);
 int a=(int)malloc( size * sizeof(int) );
 printf("Enter Elements\n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
  max=a[0];
 //Getting maximum number as we are going to check all numbers frequency from 0 till the max number of given elements
 //to get numbers repeated odd times
 for(i=0;i<size;i++)
 {
  if(max<a[i])
  max=a[i];
 }
 max+=1;
 //Temporary array to store frequency of numbers
 int b[max];
 //Resizing array to max number size
 a=(int*) realloc(a,max*sizeof(int));
 for(i=0;i<=max;i++)
 {
  b[i]=0;
  if(i>=size)
  a[i]=0;
 }
 //Storing frequency of all elements
 for(i=0;i<=max;i++)
 {
  if(a[i]!=0)
  b[a[i]]=b[a[i]]+1;
 }
 printf("Numbers repeated odd numbers of times\n");
 for(i=0;i<=max;i++)
 {
  if(b[i]!=0)
  printf("%d repeated %d times\n",i,b[i]);
 }
return 0;
}