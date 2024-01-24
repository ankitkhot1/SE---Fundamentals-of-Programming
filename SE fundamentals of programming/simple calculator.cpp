// SIMPLE CALCULATOR
#include <stdio.h>
int main(){
   char Operator;
   int num1, num2, result = 0;
   printf("Enter any one operator like +, -, *, /, % : ");
   scanf("%c", &Operator);
   printf("Enter the values of Operands num1 and num2  : ");
   scanf("%d%d", &num1, &num2);
   switch(Operator){
      case '+': result = num1 + num2;
         break;
      case '-': result = num1 - num2;
         break;
      case '*': result = num1 * num2;
         break;
      case '/': result = num1 / num2;
         break;
      case '%': result = num1 % num2;
         break;
      default: printf(" Invalid Operator ");
   }
   printf("The value = %d", result);
   return 0;
}
	
