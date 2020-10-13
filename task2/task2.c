#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
typedef int (*array)(int, int);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int x;
  printf("Operand ‘a’ : 6 | Operand ‘b’ : 3\n");
  printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): 0\n");
  scanf("%d", &x);
  printf("You chose: %d \n", x);
  
  array hold[] = {add, subtract, multiply, divide};
  int y = hold[x] (6,3);
  printf("%d", y);
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract(int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }

