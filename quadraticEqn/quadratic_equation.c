#include<stdio.h>
#include<math.h>
int main()
{
  int a, b, c, D, count=1;
  float x, y, p, q;
  while(count<5)
  {
    printf("Enter the coefficient of x^2 and x and the constant term.\n ");
    scanf("%d%d%d", &a, &b, &c);
    D=b*b-4*a*c;
    printf("Discriminant=%d.\n", D);
    p=(-b)/(2*a);
    q=(-b*b+4*a*c)/(4*a);
    if(D>0)
    {
      printf("Since discriminant is positive, therefore both roots are real\n");
      x=(-b+sqrt(D))/2*a;
      y=(-b-sqrt(D))/2*a;
      printf("Roots are %f and %f.\n", x, y);
    }
    else if(D==0)
    {
      printf("Since discriminant is equal to zero, therefore both roots are same.\n");
      x=(-b)/2*a;
      printf("Roots are %f and %f.\n", x, x);
    }
    else if(D<0)
    {
      printf("Since discriminant is negative, therefore roots are imaginary.\n");
      x=(-b+sqrt(-D))/2*a;
      y=(-b-sqrt(-D))/2*a;
      printf("Roots are %fi and %fi.\n", x, y);
    }
    if(a>0)
    {
      printf("Upward parabolic graph will be formed, with minima %f at %f.\n", p, q);
    }
    else if(a<0)
    {
      printf("Downward parabolic graph will be formed, with maxima %f at %f.\n", p, q);
    }
    printf("•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•~•\n");
    count+=1;
  }
  return 0;
}
