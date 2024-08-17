#include<stdio.h>
#include<math.h>
int main()
{
//an=a*r^(n-1)
//lastnum=num1*commonratio^(n-1) this is formula from our variables
  int i,n,sum=0,num1,num2,commonratio,series,lastnum;

  printf("Enter first 2 numbers for finding common Difference\n");
  scanf("%d%d",&num1,&num2);
  printf("Enter number of terms in series\n");
  scanf("%d",&n);
  commonratio=num2/num1;
  printf("Common Ratio is %d\n",commonratio);
lastnum=(num1*(pow(commonratio,(n-1))));
  printf("Last term in series is %d\n",lastnum);
 sum=(num1*(1-pow(commonratio,n)))/(1-commonratio);
  series=num1;
  printf("Sum of the series \n");
    for(i=1;i<=n;i++)
  {
     if(i<n)
     {
      printf("%d+",series);
      series*=commonratio;
     }
     else
     {
      printf("%d=%d\n",series,sum);
      series*=commonratio;
     }
  }
  return 0;
}