#include<stdio.h>
#include<math.h>
int main()
{ int a,b,arm,copy,num;
  printf("enter the number :");
  scanf("%d",&num);
  copy=num;
  a=num%10;
  num=num/10;
  b=num%10;
  num=num/10;
  arm=pow(a,3)+pow(b,3)+pow(num,3);
  (arm==copy)?printf("number is armstrong number"):printf("number is not armstrong");
  return 0;
}
