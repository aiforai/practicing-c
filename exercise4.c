// ex 4
#include<stdio.h> 
#include <stdlib.h>
int main() 
{
int previous =1;
int current = 0;
int next = 1;
printf("%d\n",current);//0
for (int i = 0; i <= 8; ++i)
	{
		next = current + previous;
		previous = current;
		current = next;
		printf("%d\n",current);
	}
}	
	