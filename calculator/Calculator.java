// Developed by Aryan.
import java.util.*;
import java.util.Scanner;
public class calculator
{
    public static void main(String[] args)
    {
	System.out.print("Initialising Calculator....\n");
	try{
	    Thread.sleep(3000);
	}
	catch(InterruptedException ex){
	}
	System.out.print("Enter your choice number\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Multiplication Table\n6. Power\n7. Factorial\n");
	Scanner sc=new Scanner(System.in);
	int choice=sc.nextInt();
	switch(choice)
	    {
	    case 1 : //ADDITION
		{
		    System.out.print("Entered choice is ADDITION.\n");
		    try{
			Thread.sleep(1000);
		    }
		    catch(InterruptedException ex){
		    }
		    System.out.print("How many numbers do you want to add?\n");
		    Scanner scan=new Scanner(System.in);
		    int x=scan.nextInt();
		    System.out.print("Are numbers integer type or decimal type?\nFor int, type 1 and for float, type 2.\n");
		    int newChoice=scan.nextInt();
		    if(newChoice==1)
			{
			    System.out.print("Switching calculator into int input datatype.\n");
			    try{
				Thread.sleep(2000);
			    }
			    catch(InterruptedException ex){
			    }
			    System.out.print("Enter "+x+" numbers.\n");
			    int sum=0;
			    for(int i=0;i<x;i++)
				{
				    int value=scan.nextInt();
				    sum=sum+value;
				}
			    System.out.print("Sum is "+sum);
			}
		    else if(newChoice==2)
			{
			    System.out.print("Switching calculator into float input datatype.\n");
			    try{
				Thread.sleep(2000);
			    }
			    catch(InterruptedException ex){
			    }
			    System.out.print("Enter numbers.\n");
			    float sum=0;
			    for(int i=0;i<x;i++)
				{
				    float value=scan.nextFloat();
				    sum=sum+value;
				}
			    System.out.print("Sum is "+sum);
			}
		    else
			{
			    System.out.print("----ERROR----\n");
			}
		}
		break;
	    case 2 ://SUBTRACTION
		{
		    System.out.print("Enterd choice is SUBTRACTION.\nAre numbers integer type or decimal type?\nFor int, type 1and for float, type 2\n");
		    Scanner scan=new Scanner(System.in);
		    int newChoice=scan.nextInt();
		    if(newChoice==1)
			{
			    System.out.print("Switching calculator into int input datatype.\n");
			    try{
				Thread.sleep(2000);
			    }
			    catch(InterruptedException ex){
			    }
			    System.out.print("Enter first number.\n");
			    int num1=scan.nextInt();
			    System.out.print("Enter second number.\n");
			    int num2=scan.nextInt();
			    System.out.print("Difference is ");
			    System.out.print(num1-num2);
			}
		    else if(newChoice==2)
			{
			    System.out.print("Switching calculator into float input datatype.\n");
			    try{
				Thread.sleep(2000);
			    }
			    catch(InterruptedException ex){
			    }
			    System.out.print("Enter first number.\n");
			    float num1=scan.nextFloat();
			    System.out.print("Enter second number.\n");
			    float num2=scan.nextFloat();
			    System.out.print("Difference is ");
			    System.out.print(num1-num2);
			}
		    else
			{
			    System.out.print("----ERROR----");
			}
		}
		break;
	    case 3 : //MULTIPLICATION
		{
		    System.out.print("Entered choice is MULTIPLICATION.\n");
		    try{
			Thread.sleep(1000);
		    }
		    catch(InterruptedException ex){
		    }
		    System.out.print("How many numbers do you want to multiply?\n");
		    Scanner scan=new Scanner(System.in);
		    int x=scan.nextInt();
		    System.out.print("Are numbers integer type or decimal type?\nFor int, type 1 and for float, type 2.\n");
		    int newChoice=scan.nextInt();
		    if(newChoice==1)
			{
			    System.out.print("Switching calculator into int input datatype.\n");
			    try{
				Thread.sleep(2000);
			    }
			    catch(InterruptedException ex){
			    }
			    System.out.print("Enter "+x+" numbers.\n");
			    int product=1;
			    for(int i=0;i<x;i++)
				{
				    int value=scan.nextInt();
				    product=product*value;
				}
			    System.out.print("Product is "+product);
			}
		    else if(newChoice==2)
			{
			    System.out.print("Switching calculator into float input datatype.\n");
			    try{
				Thread.sleep(2000);
			    }
			    catch(InterruptedException ex){
			    }
			    System.out.print("Enter numbers.\n");
			    float product=1;
			    for(int i=0;i<x;i++)
				{
				    float value=scan.nextFloat();
				    product=product*value;
				}
			    System.out.print("Product is "+product);
			}
		    else
			{
			    System.out.print("----ERROR----\n");
			}
		}
		break;
	    case 4 : //DIVISION
		{
		    System.out.print("Enterd choice is DIVISION.\nAre numbers integer type or decimal type?\nFor int, type 1 and for float, type 2\n");
		    Scanner scan=new Scanner(System.in);
		    int newChoice=scan.nextInt();
		    if(newChoice==1)
			{
			    System.out.print("Switching calculator into int input datatype.\n");
			    try{
				Thread.sleep(2000);
			    }
			    catch(InterruptedException ex){
			    }
			    System.out.print("Enter first number.\n");
			    int num1=scan.nextInt();
			    System.out.print("Enter second number.\n");
			    int num2=scan.nextInt();
			    System.out.print("Quotient is ");
			    System.out.println(num1/num2);
			    System.out.print("Remainder is ");
			    System.out.print(num1%num2);
			}
		    else if(newChoice==2)
			{
			    System.out.print("Switching calculator into float input datatype.\n");
			    try{
				Thread.sleep(2000);
			    }
			    catch(InterruptedException ex){
			    }
			    System.out.print("Enter first number.\n");
			    float num1=scan.nextFloat();
			    System.out.print("Enter second number.\n");
			    float num2=scan.nextFloat();
			    System.out.print("Quotient is ");
			    System.out.println(num1/num2);
			    System.out.print("Remainder is ");
			    System.out.print(num1%num2);
			}
		    else
			{
			    System.out.print("----ERROR----");
			}
		}
		break;
	    case 5 : //MULTIPLACATION_TABLE
		{
		    System.out.print("Entered choice is MULTIPLICATION TABLE.\nEnter the number.\n");
		    Scanner scan=new Scanner(System.in);
		    int newChoice=scan.nextInt();
		    System.out.print("GENERATING TABLE....\n");
		    try{
			Thread.sleep(2500);
		    }
		    catch(InterruptedException ex){
		    }
		    int product;
		    for(int i=1;i<=10;i++)
			{
			    product=newChoice*i;
			    System.out.println(newChoice+" * "+i+" = "+product);
			}
		}
		break;
	    case 6 : //POWER
		{
		    System.out.print("Entered choice is POWER.\n");
		    try{
			Thread.sleep(2500);
		    }
		    catch(InterruptedException ex){
		    }
		    Scanner scan=new Scanner(System.in);
		    System.out.print("Enter the base.\n");
		    double newChoice1=scan.nextInt();
		    System.out.print("Enter the power.\n");
		    double newChoice2=scan.nextInt();
		    double newChoice3=Math.pow(newChoice1,newChoice2);
		    System.out.print("Result is "+newChoice3);
		}
		break;
	    case 7 : //FACTORIAL
		{
		    System.out.print("Entered choice is FACTORIAL.\nEnter the number.\n");
		    Scanner scan=new Scanner(System.in);
		    int newChoice1=scan.nextInt();
		    int newChoice2=factorial(newChoice1);
		    System.out.print("Result is "+newChoice2);
		}
		break;
	    }
    }
    static int factorial(int a)
    {
	if(a==0||a==1)
	    {
		return 1;
	    }
	else
	    {
		return factorial(a-1)*a;
	    }
    }
}
