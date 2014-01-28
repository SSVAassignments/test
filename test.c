#include <stdio.h>
#include <stdlib.h>


int add(a,b);

void main()
{
	int a=0,b=0;
	printf("I've added this..!\n");
	printf("Addition is :: %d\n",add(a,b));

}

int add(int a,int b)
{

	return(a+b);

}

int mult(int a, int b)
{
	return(a*b);
}

int div (int a,int b)
{

	return(a/b);
}
