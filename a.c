#include <stdlib.h>
#include <string.h>
#include <stdio.h>



void swap(int* a, int* b);
int main()
{
	printf("hello,world\n");
	int aa = 1;
	int bb = 2;
	printf("a = %d, b = %d\n",aa,bb);
	swap(&aa,&bb);
	printf("a = %d, b = %d\n",aa,bb);


}

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
