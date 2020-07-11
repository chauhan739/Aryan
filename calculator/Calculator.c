#include <stdio.h>
 int main()
{
  int x, y, z, a, s, count=1;
  while(count<=5)
  {
    printf("Enter your choice number.\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &a);
    switch(a)
    {
      case 1 :
      printf("Entered choice is ADDITION.\nEnter any two numbers to be added.\n");
      scanf("%d%d", &x, &y);
      z=x+y;
      printf("Answer : %d\n", z);
      break;
      case 2 :
      printf("Entered choice is SUBTRACTION.\nEnter any two numbers to be subtracted.\n");
      scanf("%d%d", &x, &y);
      z=x-y;
      printf("Answer : %d\n", z);
      break;
      case 3 :
      printf("Entered choice is MULTIPLICATION.\nEnter any two numbers to be multiplied.\n");
      scanf("%d%d", &x, &y);
      z=x*y;
      printf("Answer : %d\n", z);
      break;
      case 4 :
      printf("Entered choice is DIVISION.\nEnter any tao numbers to be divided.\n");
      scanf("%d%d", &x, &y);
      z=x/y;
      s=x%y;
      printf("Answer : %d(Quotient) %d(Remainder)\n", z, s);
      break;
      default :
      printf("Enter correct choice number fool.\n");
    }
      printf("*******************************************************\n");
    count+=1;
  }
  return 0;
}
