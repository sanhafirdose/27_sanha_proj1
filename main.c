#include <stdio.h>

int main() 
{ 
int num1,num2;
char op;
float result;

printf("enter two integers:");
scanf("%f %f",&num1,&num2);

printf("enter the operator\n");
printf("+ for addition\n");
printf("- for subraction\n");
printf("* for multiplication\n");
printf("/ for division\n");
printf("%% for modulus\n");

scanf(" %c",&op);

if (op=='+')
{
  result=num1+num2;
}
 else if(op=='-')
 {
   result=num1-num2;
 } 
 else if(op=='*') 
 {
  result=num1*num2;
 }
 else if(op=='/')
 {
   if (num2==0)
   {
     printf("enter a non zero value");
     return(-1);
   }
   else
   {
    result=num1/num2;
   }
 }
 else if(op=='%')
 {
   if(num2==0)
   {
     printf("enter a non zero value\n");
     return (-1);
     }
   else
   {
   result=num1%num2;
   }
 }
else
{
  printf("invalid operator\n");
  return 1;
}
printf("result= %f\n",result);
return 0;
}

